import fs from 'node:fs/promises';

async function createLog() {
  try {
    await fs.writeFile('log.txt', 'system started successfully\n');
  } catch (err) {
    console.error('error! Writing file', err);
  }
}

console.log('file creation using writeFile');
createLog();