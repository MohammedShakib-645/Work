import fs from 'node:fs/promises';
async function createlog(){
    try {
       await fs.writeFile("log1.txt","system started successfully\n");
        console.log("file created successfully");

    }
    catch(error){
        console.error("Error writing file",error);
    }
}
createlog();
console.log("this is the synchronous file");
