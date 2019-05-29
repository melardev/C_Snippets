#include "basics_defs.h"
#include <stdio.h>
#include <stdarg.h>

int addition(int arg_count, ...) {
    va_list args;
    int result = 0;

    va_start(args, arg_count);

    for (int i = 0; i < arg_count; i++)
        result += va_arg(args, int);

    va_end(args); /* free memory */
    return result;
}

void variable_number_args() {
    printf("Addition should be 14, what we got was: %d", addition(4, 2, 3, 4, 5));
}