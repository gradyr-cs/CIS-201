/*
Notes on arrays.

Arrays can be configured with multiple dimensions. 

int myArray[2][2]; // has two rows, and can access coordinates like battleship(aka cartesian system)

myArray[0][0] = 5; // places int 5 into position 0,0, where first loc is row (going down) and second is column (going right)

arrays can push values into other memory locations, so they are more difficult to debug.
it can be better to use vectora in their place.
vectors will at least provide a runtime / sigabrt error if you try to access a location that is not defined in its current size.
this error will be displayed into the console, as of my knowledge thus far.

'\0' is the null character, the compiler will always append this character. 





*/