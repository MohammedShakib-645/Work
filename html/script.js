let userName = prompt("Enter your name");
let birthYear = prompt("Enter your birth year");
let currentYear = new Date().getFullYear();
let age = currentYear - Number(birthYear);

document.getElementById("greeting").textContent = `hello,${userName}`;
document.getElementById("output").textContent = `you are approxiamately ${age} years old:`;