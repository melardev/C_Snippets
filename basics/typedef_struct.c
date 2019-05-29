#include "basics_defs.h"
#include <stdio.h>

typedef struct Rectangle {
    double x, y, width, height;
} Rectangle;

void typedef_struct() {
    // Without typedef we would need to create structs this way
    struct Rectangle rectangle = {0, 0, 200, 200};

    // With typedef we can get rid of the struct keyword
    Rectangle rectangle2 = {0, 0, 150, 150};

    printf("Rectangle Position (%lf, %lf), width: %.2lf; height %.2lf\n",
           rectangle.x, rectangle.y,
           rectangle.width, rectangle.height);

    printf("Rectangle Position (%lf, %lf), width: %.2lf; height %.2lf\n",
           rectangle2.x, rectangle2.y,
           rectangle2.width, rectangle2.height);
}
