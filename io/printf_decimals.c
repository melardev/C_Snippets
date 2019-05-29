
#include "iodefs.h"
#include <stdio.h>

void printf_decimals() {
    double double_1 = 23.45;
    printf("Default %f\n", double_1);
    printf(".f %.f\n", double_1);
    printf("only one decimal %.1f\n", double_1);
}