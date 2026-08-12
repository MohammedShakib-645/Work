/*function divide(a, b) { 
        try { 
        if (typeof a !== "number" || typeof b !== "number") {
            throw new Error("Both values must be numbers!");
        } 
        if (b === 0) {
            throw new Error("Division by Zero is not allowed!");
        } 
        return a / b;
        } 
        catch (error) {
        return "Error: " + error.message;
        } 
}   
console.log(divide(10, 0))
*/

const rl = require("readline-sync");

function divisionValidation(a, b) {
    try {
        if (typeof a !== "number" || typeof b !== "number") {
            throw new Error("Both values must be numbers!");
        }
        if (b === 0) {
            throw new Error("Division by zero is not allowed!");
        }
        return a / b;
    } 
    catch (error) {
        return "Error: " + error.message;
    }
}   

rl.question("enter num1 : ", (a)=>{
    rl.question("enter num2 : ", (b)=>{

        console.log(divisionValidation(a,b));
        rl.close();

    });
});