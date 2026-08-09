import fs from 'node:fs/promises';
async function deleteFile(){
    try{
        await fs.unlink(filepath);
        console.log(`successfully deleted file:${filepath}`);
    }
    catch(error){
        if(error.code==='ENOENT'){
            console.error(`Error:file"${filepath}"does not exist`);
        }
        else{
            console.error(`Error deleting file:${filepath}`,);
        }
    }
}
deleteFile('log1.txt');