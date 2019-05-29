#include "iodefs.h"
#include <stdio.h>

void printf_scanf_snippet() {
    int number_1;
    printf("Enter an integer\n");
    scanf("%d", &number_1);
    printf("\n The integer that you have entered %d", number_1);

    getchar();
}
