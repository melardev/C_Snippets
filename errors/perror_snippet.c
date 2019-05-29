#include "error_defs.h"
#include <stdio.h>

void perror_snippet() {
    FILE *file_ptr;
    file_ptr = fopen("non_existent_file.txt", "rb");
    if (file_ptr == NULL)
        perror("The following error occurred");
    else
        fclose(file_ptr);
}

