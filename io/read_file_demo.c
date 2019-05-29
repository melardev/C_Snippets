#include "iodefs.h"
#include <stdio.h>
#include <stdlib.h>

void read_file() {
    char ch;
    FILE *fp;

    fp = fopen("../main.c", "r"); // read mode

    if (fp == NULL) {
        perror("Error opening the file\n");
        exit(EXIT_FAILURE);
    }

    printf("File contents:\n");

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

}