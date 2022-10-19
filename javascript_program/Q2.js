//2. What is let? When should we use it?
let x = "John Doe";
/*
Variables defined with let cannot be redeclared.

Variables defined with let must be declared before use.
Variables defined with let have block Scope.
*/
{
    let z = "kristen stewart";
}

console.log(z); //error...    undefined in this scope
// SyntaxError: Identifier 'x' has already been declared

//let x = 0;

// With var you can:

var y = "John Doe";
console.log(y);
var y = 0;
console.log(y);