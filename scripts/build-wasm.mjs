import path from 'node:path';
import { fileURLToPath } from 'node:url';

import fs from 'node:fs/promises';

import {
  findExistingWasm,
  readWasmTargets,
  resolveSourceRoot,
  run,
  validateWasmModule,
} from './wasm-utils.mjs';

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const crateRoot = path.resolve(__dirname, '..');

for (const target of await readWasmTargets(crateRoot)) {
  const sourceRoot = await resolveSourceRoot(crateRoot, target.languageId);
  await fs.mkdir(path.dirname(target.targetPath), { recursive: true });

  console.log(`building ${target.languageId} wasm from ${sourceRoot}`);
  await run('npx', ['tree-sitter', 'build', '--wasm'], sourceRoot);

  const sourcePath = await findExistingWasm(sourceRoot, target.manifest.parser_wasm_file_name);
  if (!sourcePath) {
    throw new Error(`wasm output not found for ${target.languageId} in ${sourceRoot}`);
  }

  await validateWasmModule(sourcePath, target.expectedExport);
  if (path.resolve(sourcePath) !== path.resolve(target.targetPath)) {
    await fs.copyFile(sourcePath, target.targetPath);
  }
  await validateWasmModule(target.targetPath, target.expectedExport);
  console.log(`copied ${sourcePath} -> ${target.targetPath}`);
}
