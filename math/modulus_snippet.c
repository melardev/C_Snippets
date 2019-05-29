#include <stdio.h>

void modulus_snippet() {
    int number_1 = 10;
    int number_2 = 4;
    int quotient = number_1 / number_2;
    int remainder = number_1 % number_2;

    printf("The division quotient for %d and %d is %d; and the remainder is %d\n",
           number_1, number_2, quotient, remainder);
}
