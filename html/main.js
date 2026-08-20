import {convertToCaps} from"./converter.js";
let file=document.getElementById("myFile");
let mesg=document.getElementById("msg");
let err=document.getElementById("err");
file.addEventListener("change",async function(){
      mesg.textContent="";
      err.textContent="";
      try{
        let selectedFile=file.files[0];
        if(!selectedFile.name.endsWith(".txt")){
            throw new Error("only .txt files are allowed.");
        }
        let text=await selectedFile.text();
        mesg.textContent=convertToCaps(text);
      }
      catch(error){
        err.textContent=error.message;
      }
});
