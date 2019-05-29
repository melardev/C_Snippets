#include "iodefs.h"
#include <stdio.h>

void scanf_hex_octal() {
    int number_1;
    int hex_number;
    int octal_number;

    printf("Enter three numbers, second will be treated as hex, third as octal:");
    scanf("%d %x %o", &number_1, &hex_number, &octal_number);

    // type 5+[Enter] then ff+[Enter] then 22+[Enter] to see some surprising result
    printf("\nValues entered %d %d %d:\n", number_1, hex_number, octal_number);

    getchar();
}