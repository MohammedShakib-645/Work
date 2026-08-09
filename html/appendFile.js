import fs from 'node:fs/promises';
async function createlog(){}
async function addLogEntry(message){
    try{
        const timestamp=new Date().toISOString();
        await fs.appendFile("log1.txt",`[${timestamp}] ${message}\n`);
        console.log(" log appended successfully");
    }
    catch(error){
        console.error("Error appending to file",error);
    }
}
addLogEntry("user 101 logged in");