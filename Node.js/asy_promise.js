//Creating a Promise
function fetchUserData(){
    return new Promise((resolve,reject)=>{
        let success = true;// Simulating server response
        setTimeout(()=>{
            if (success){
                resolve({ id:101, name:"Ananya" });//success!
            }else{
                reject("Server Error:Unable to fetch user");//failure!
            }
        },2000);
    });
}

//Consuming the promise
fetchUserData()
    .then((data)=>{
        console.log("User received:",data.name);
    })
    .catch((error)=>{
        console.log("Error:",error);
    });