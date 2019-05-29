#include "mathdefs.h"
#include <stdio.h>
#include <math.h>

void ceil_floor() {
    double double_1;

    printf("Enter a decimal number: ");
    scanf("%lf", &double_1);

    printf("\nYou entered: %lf", double_1);
    printf("\nRound: %lf", round(double_1));
    printf("\nCeil: %lf", ceil(double_1));
    printf("\nFloor: %lf", floor(double_1));

    getchar();

}
