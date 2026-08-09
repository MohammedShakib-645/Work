import fs from 'node:fs/promises';
async function readLogs() {
    try{
        const content=await fs.readFile('log1.txt','utf8');
        console.log("-------File content-----");
        console.log(content);
    }
    catch(error){
        console.log("Error reading file",error);
    }
}
readLogs();