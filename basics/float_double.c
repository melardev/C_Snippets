#include "basics_defs.h"
#include <stdio.h>

void float_double()
{
    printf("Sizeof Float: %d\n", sizeof(float));
    printf("Sizeof Double: %d\n", sizeof(double));
    printf("Sizeof Long Double: %d\n", sizeof(long double));

    float float_1 = 23.0f;
    float float_2 = 23;
    float float_3 = 23.f;
    printf("%f\n", float_1);
    printf("%f\n", float_2);
    printf("%f\n", float_3);
}