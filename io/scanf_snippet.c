#include "iodefs.h"
#include <stdio.h>

void scanf_snippet() {
    int number;
    printf("Please write a number\n");
    scanf("%d", &number);
    printf("\nYou wrote %d", number);

    char string[255];
    printf("Please write a string(max 244)\n");
    scanf("%s", &string);
    printf("\nYou wrote %s", string);

    float decimal_number;
    printf("Please write a float\n");
    scanf("%f", &decimal_number);
    printf("\nYou wrote %f", decimal_number);

    char c;
    printf("Please write a character\n");
    scanf("%c", &c);
    printf("\nYou wrote %c", c);

}
