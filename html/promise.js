//creating a promise
function fetchUserData(){
    return new Promise((resolve,reject)=>
    {
        let success=true;//simulating server response

        setTimeout(()=>{
            if(success){
                resolve({id:101,name:"moini"});//success
            }
            else{
                reject("server Error:unable to fetch user");//failure
            }
        },2000);
    });
}
//consuming the promise
fetchUserData()
.then((data)=>{
    console.log("user Received:",data.name);
})
.catch((error)=>{
    console.log("Error:",error);
});