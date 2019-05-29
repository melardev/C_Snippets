#include "basics_defs.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


int calculate_root(int number) {
    return number * number;
}

void assert_snippet() {

    printf("Testing calculate_root()\n");
    for (int i = 0; i < 20; i++) {
        int random_even_number = calculate_root(i);
        printf("Got %d ...... ", random_even_number);
        assert(random_even_number == i * i);
        printf("Check passed\n");
    }
}