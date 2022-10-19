// Strict mode is declared by adding "use strict"; to the beginning of a script 
// or a function.
// Declared at the beginning of a script, it has global scope

"use strict";
let x;
 x = 3.14;  // This will cause an error because x is not declared
console.log(x);
myFunction();

function myFunction() {
var y;
 y = 3.14;
 console.log(y);
   // This will also cause an error because y is not declared
}
