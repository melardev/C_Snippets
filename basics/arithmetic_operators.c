#include "basics_defs.h"
#include <stdio.h>

void arithmetic_operators() {

    int number_1 = 20;
    int number_2 = 10;
    int number_3 = 6;

    printf("Used numbers : %d %d %d", number_1, number_2, number_3);

    int addition = number_1 + number_2 + number_3;
    printf("addition: %d\n", addition);

    int substraction = number_1 - number_2 - number_3;
    printf("substraction: %d\n", substraction);

    int multiplication = number_1 * number_2 * number_3;
    printf("multiplication: %d\n", multiplication);

    int division = number_1 / number_2;
    printf("division: %d/%d= %d\n", number_1, number_2, division);

}