//
// Created by lahra on 4/17/2019.
//

#ifndef SNIPPETSC_ERRNO_DEMO_H
#define SNIPPETSC_ERRNO_DEMO_H

#include <stdio.h>
#include <errno.h>

extern int errno;

int fprintf_stderr () {
    FILE * fp;
    fp = fopen ("non_existent_file.txt", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error message: ");
    } else {
        fclose (fp);
    }
    return 0;
}
#endif //SNIPPETSC_ERRNO_DEMO_H
