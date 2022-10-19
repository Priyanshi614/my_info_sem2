p = 3.14;       // This will not cause an error.
yourFunction();

function yourFunction() {
  "use strict";
//   y = 3.14;   // This will cause an error
}

// Strict mode makes it easier to write "secure" JavaScript.
// Strict mode changes previously accepted "bad syntax" into real errors.

// Using an object, without declaring it, is not allowed:
// x = {p1:10, p2:20};      // This will cause an error

// Duplicating a parameter name is not allowed
// function x(p1, p1) {};
