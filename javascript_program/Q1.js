//Q1. What is const? When should we use it?

const PI = 3.14;
console.log(PI); //correct... output = 3.14



// PI = 3.1415;      // This will give an error
// PI = PI + 10;   // This will also give an error

// JavaScript const variables must be assigned a value when they are declared
// Incorrect
// const PI;
// PI = 3.14159265359;

// As a general rule, always declare a variables with const unless you know that 
// the value will change.

// Always use const when you declare:
// A new Array
// A new Object
// A new Function
// A new RegExp

// The keyword const is a little misleading.
// It does not define a constant value. 
// It defines a constant reference to a value.

// Because of this you can NOT:
// Reassign a constant value
// Reassign a constant array
// Reassign a constant object

// But you CAN:
// Change a constant array
// Change a constant object

// You can create a constant array:
const alfa = ["ABC", "DEF", "GHI"];
console.log(alfa);
// You can change an element:
alfa[0] = "XYZ";
console.log(alfa);
// You can add an element:
alfa.push("JKL");
console.log(alfa);

// But you can NOT reassign the array
// const cars = ["Saab", "Volvo", "BMW"];
// cars = ["Toyota", "Volvo", "Audi"];    // ERROR

// You can change the properties of a constant object
// You can create a const object:
const myCar = {type:"Fiat", model:"500", color:"white"};
// You can change a property:
myCar.color = "red";
// You can add a property:
myCar.owner = "Kiwi";
console.log(myCar);

// But you can NOT reassign the object
// const myCar = {type:"Fiat", model:"500", color:"white"};
// myCar = {type:"Volvo", model:"EX60", color:"red"};    // ERROR