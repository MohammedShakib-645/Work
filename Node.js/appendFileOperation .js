import fs from 'node:fs/promises';
async function addLogEntry(message){
    try{
        const timestamp = new Date().toISOString();
        await fs.appendFile('log.txt', `[${timestamp}] - ${message}\n`);
        console.log("Log entry added successfully");
    }
    catch(err){
        console.error("Error appending to file", err);
    }
}
addLogEntry("user 101 logged in");