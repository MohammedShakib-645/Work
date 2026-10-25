import fs from 'node:fs/promises';
async function createlog(){
    try{
        await fs.writeFile('log.txt', 'System started successfully!\n');
        console.log("file created successfully");
    }
    catch(err){
        console.error("error writing file", err);
    }
}
console.log("file creating using writefile");
createlog();



