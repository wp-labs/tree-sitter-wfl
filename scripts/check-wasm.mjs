import { fileURLToPath } from 'node:url';
import path from 'node:path';

import { readWasmTargets, validateWasmModule } from './wasm-utils.mjs';

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const crateRoot = path.resolve(__dirname, '..');

for (const target of await readWasmTargets(crateRoot)) {
  await validateWasmModule(target.targetPath, target.expectedExport);
  console.log(`validated ${target.languageId}: ${target.targetPath}`);
}
