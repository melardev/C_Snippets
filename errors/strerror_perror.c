#include "error_defs.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>

// errno it is a global variable defined in errno.h
extern int errno;

void strerror_perror() {
    FILE *fp;
    fp = fopen("non_existent_file.txt", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Value of errno: %d\n", errno);
        fprintf(stderr, "Error opening the file: %s\n", strerror(errno));
        perror("Error printed by perror is: ");
    } else {
        fclose(fp);
    }
}

