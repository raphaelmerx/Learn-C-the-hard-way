The `man cc` page gives a short description of the different steps for the Clang compilers.

From `man make`:
* Identifies what files need to be recompiled
* Issues the right commands to compile.

A file like stdio.h is called a *header file*.

### printf
Structure: [http://en.wikipedia.org/wiki/Printf_format_string#Format_placeholders](http://en.wikipedia.org/wiki/Printf_format_string#Format_placeholders)  
Types: [http://en.wikipedia.org/wiki/Printf_format_string#Type](http://en.wikipedia.org/wiki/Printf_format_string#Type)  
This is where the python formatting comes from.

### Installing from source
`./configure` to create the Makefile. File depends on your environment.
`make` to compile the source
`sudo make install`

### Syntax and type of variables
The main function is the one executed in the file. It returns an exit value for the OS, like 0.
Strings are just arrays of chars. They use "", while chars use ''.

### Sizes and Arrays
The null character '\0' is effectively 0. In C characters are just integers.
When C sees `char trout[] = {3, 4, 73}`, since no length was declared for the array, it computes the length of {3, 4, 73}, and creates an array of length 3.
#### Sizes
Returns the number of bytes that a variable occupies.
When passed a type, like `int`, gives us the number of bytes that an int occupies.  
This number of bytes depends on your computer, eg 32 bit vs 64 bit.

A string always ends with the null character.

Funky: if `area` is an array of size 4 and of type integer, then `sizeof(area[10])` will not throw an error, but return the size of `int` instead.  
No complaint when an array of int gets assigned a character.  

### Assigning to an element of the wrong type
No complaint when a string gets assigned an integer where a character was. String stays of the same size. Printing the whole string inserts a `<` where the integer is, but retrieving the integer works fine.
```c
char name[] = "wap"
name[1] = 90
printf("name[1] is: %d\n", name[1]); // prints 90
printf("Size of the name: %lu\n", sizeof(name)); // prints 4
printf("name string is: %s\n", name); // prints w<p
printf("name[1] is: %d\n", name[1]); // still prints 90
```
Correction: when trying to put an int where a char was, if integer is > 66, compiler warns about *implicit conversion*, converted to 66.
Surprising: it's still an int. Not converted to the char representation of an int.

Common cause of errors: strings that don't get terminated by an int. Say you replace the last char with something else than the null byte.

Declare a string with `char *name = 'my name';`.  
Array of strings with `char *argv[] = ...;`.

Single quotes for char, double quotes for strings.

`*argv[]` is all the arguments given to the executable. `argv[0]` is its name, like `./ex10`.
`argc` is the number of arguments given to the executable.

There are no booleans in C, 0 represents False, and any other integer represents True.

