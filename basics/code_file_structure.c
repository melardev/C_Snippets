#include <stdio.h> // when we include other header files we use <>
#include "basics_defs.h" // when we include our header files we use quotes(")


/**
 * This is our function definition
 */
int code_file_structure() { // the function body begins from here

    printf("File structure snippet"); // this is a function call, the function we call is printf()
    // which what it does is shows something into the stdout(Standard output) which is the console in our case
    // but it could be a file for example
    getchar();
    return 0; // this is the value we are returning to the called of this function
    // the function body ends
}
