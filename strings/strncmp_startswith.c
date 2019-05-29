#include <stdio.h>
#include "textdefs.h"
#include <string.h>

int start_with(const char *text, const char *prefix) {
    if (strncmp(text, prefix, strlen(prefix)) == 0) return 1;
    return 0;
}

void strncmp_startswith() {

    printf("Does Melardev start with 'Melar' ?\n");
    if (start_with("Melardev", "Melar"))
        puts("Yes!\n");
    else
        puts("Nop!\n");


    printf("Does Java start with 'C++' ?\n");
    if (start_with("Java", "C++"))
        puts("Yes!\n");
    else
        puts("Nop!\n");

    printf("Does Python start with 'py' ?\n");
    if (start_with("Python", "py"))
        puts("Yes!\n");
    else
        puts("Nop!\n");
}
