
#ifndef STR_ENDS_WITH_C
#define STR_ENDS_WITH_C

#include <limits.h>
#include <stdio.h>
#include <string.h>


int ends_with(const char * str, const char * suffix) {

    if( str == NULL || suffix == NULL )
        return 0;

    size_t str_len = strlen(str);
    size_t suffix_len = strlen(suffix);

    if(suffix_len > str_len)
        return 0;

    return 0 == strncmp( str + str_len - suffix_len, suffix, suffix_len );
}


void strncmp_endswith() {

    printf("Does Melardev end with 'dev' ?\n");
    if (ends_with("Melardev", "dev"))
        puts("Yes!\n");
    else
        puts("Nop!\n");


    printf("Does Java end with 'vaa' ?\n");
    if (ends_with("Java", "C++"))
        puts("Yes!\n");
    else
        puts("Nop!\n");

    printf("Does Python end with 'on' ?\n");
    if (ends_with("Python", "on"))
        puts("Yes!\n");
    else
        puts("Nop!\n");
}
#endif //STR_ENDS_WITH_C
