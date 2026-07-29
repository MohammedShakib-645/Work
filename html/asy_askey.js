function prepareFood(dish, callback) {
    console.log(`cooking ${dish}....`);
    //stimulated 3-sceconds dealy (like fetching from an api)
    setTimeout(()=>
    {
        console.log(`${dish} is ready!`);
        callback();
    }, 3000); 
}

function serveFood()
{
    console.log("serving food to customer.");
}

prepareFood("biryani",serveFood);
console.log("make a order");
