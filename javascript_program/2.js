let x = "John Doe";

// Variables defined with let cannot be redeclared.
// SyntaxError: Identifier 'x' has already been declared

let x = 0;

// With var you can:

var y = "John Doe";
console.log(y);
var y = 0;
console.log(y);