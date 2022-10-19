// Block Scope
{
    let x = 2;
    console.log(x);
}
// x = x + 1;
// console.log(x);
// x can NOT be used here

{
    var x = 2;
}
// x CAN be used here

//   Redeclaring a variable using the var keyword can impose problems.
var w = 10;
// Here w is 10

{
var w = 2;
// Here w is 2
}

// Here w is 2

// Redeclaring a variable using the let keyword can solve this problem.
let p = 10;
// Here p is 10

{
let p = 2;
// Here p is 2
}

// Here p is 10

// With let, redeclaring a variable in the same block is NOT allowed
var q = 2;    // Allowed
// let q = 3;    // Not allowed

{
let q = 2;    // Allowed
// let q = 3     // Not allowed
}

{
let q = 2;    // Allowed
// var q = 3     // Not allowed
}

// Redeclaring a variable with let, in another block, IS allowed
let t = 2;    // Allowed

{
let t = 3;    // Allowed
}

{
let t = 4;    // Allowed
}

// Variables defined with var are hoisted to the top and can be initialized at any time.
// Meaning: You can use the variable before it is declared:
carName = "Volvo";
var carName;
console.log(carName);

// Variables defined with let are also hoisted to the top of the block, but not initialized.
// Meaning: Using a let variable before it is declared will result in a ReferenceError

 let bikeName = "MT 15";
//let bikeName
//console.log(bikeName);

//let bikeName = "YZF";