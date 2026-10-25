function prepareFood(dish, callback){
    console.log(`cooking ${dish}...`);

    setTimeout(()=>{
        console.log(`${dish} is ready`);
        callback();
    },10000);
}
    function serveFood(){
        console.log("Serving food to customer");
    }
    prepareFood("biryani", serveFood);
    console.log("make a order");