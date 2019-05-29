#include "iodefs.h"
#include <stdio.h>

void getc_snippet() {
    puts("getc(stdin)");

    // the argument passed is a stream identifier
    // in this case it is stdin
    // getc returns a character read from the stream as integer,
    // that integer may have special value such as EOF
    // for example if you type A, then the ascii value is 65, so getc returns 65
    // look at the ascii table you can find here: http://www.asciitable.com/
    // to check the integer values associated to each character
    int char_read = getc(stdin);
    printf("You wrote %d\n", char_read);
    printf("Value of special EOF macro %d\n", EOF);

    getchar();
}
