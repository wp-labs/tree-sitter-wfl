import fs from 'node:fs/promises';
import path from 'node:path';
import { spawn } from 'node:child_process';

const LANGUAGE_IDS = ['wfl', 'wfg', 'wfs'];

export async function run(command, args, cwd) {
  await new Promise((resolve, reject) => {
    const child = spawn(command, args, {
      cwd,
      stdio: 'inherit',
      shell: false,
    });

    child.on('error', reject);
    child.on('exit', (code) => {
      if (code === 0) {
        resolve();
      } else {
        reject(new Error(`${command} ${args.join(' ')} exited with code ${code}`));
      }
    });
  });
}

export async function readWasmTargets(crateRoot) {
  const targets = [];

  for (const languageId of LANGUAGE_IDS) {
    const manifestPath =
      languageId === 'wfl'
        ? path.join(crateRoot, 'editor', 'asset-manifest.json')
        : path.join(crateRoot, 'editor', languageId, 'asset-manifest.json');
    const manifest = JSON.parse(await fs.readFile(manifestPath, 'utf8'));
    targets.push({
      languageId,
      manifestPath,
      manifest,
      targetPath: path.join(crateRoot, manifest.parser_wasm),
      expectedExport: `tree_sitter_${languageId}`,
    });
  }

  return targets;
}

export async function resolveSourceRoot(crateRoot, languageId) {
  if (languageId === 'wfl') {
    return crateRoot;
  }

  const envKey = `TREE_SITTER_${languageId.toUpperCase()}_DIR`;
  const candidates = [
    process.env[envKey],
    path.resolve(crateRoot, '..', `tree-sitter-${languageId}`),
  ].filter(Boolean);

  for (const candidate of candidates) {
    const sourceRoot = path.resolve(candidate);
    const grammarPath = path.join(sourceRoot, 'grammar.js');
    try {
      await fs.access(grammarPath);
      return sourceRoot;
    } catch {
      // Try the next candidate.
    }
  }

  throw new Error(
    `No grammar source found for ${languageId}. Set ${envKey} or create ../tree-sitter-${languageId}.`,
  );
}

export async function findExistingWasm(sourceRoot, fileName) {
  const candidates = [
    path.join(sourceRoot, fileName),
    path.join(sourceRoot, 'build', fileName),
    path.join(sourceRoot, 'dist', fileName),
    path.join(sourceRoot, 'bindings', 'web', fileName),
  ];

  for (const candidate of candidates) {
    try {
      await fs.access(candidate);
      return candidate;
    } catch {
      // Continue.
    }
  }

  return null;
}

export async function validateWasmModule(filePath, expectedExport) {
  const buffer = await fs.readFile(filePath);
  let module;

  try {
    module = new WebAssembly.Module(buffer);
  } catch (error) {
    throw new Error(`Invalid wasm module at ${filePath}: ${error.message}`);
  }

  const exportNames = WebAssembly.Module.exports(module).map((entry) => entry.name);
  if (!exportNames.includes(expectedExport)) {
    throw new Error(
      `Wasm module ${filePath} is missing expected export ${expectedExport}. Exports: ${exportNames.join(', ')}`,
    );
  }
}
