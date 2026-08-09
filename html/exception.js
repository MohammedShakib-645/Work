import fs from 'node:fs/promises';

function createLog() {
  try {
    fs.writeFileSync("log.txt", 'system started successfully\n');
    console.log("file created successfully");
  } catch (err) {
    console.error("error! Writing file", err);
  }
}

console.log("this is the synchronous file");
createLog();