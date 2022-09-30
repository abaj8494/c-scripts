// sorts an array of integers taken as space delimited arguments

#include <stdio.h>
#include <stdlib.h>

int *mergesort(int *sort) {
    return sort;
}

int main(int argc, char **argv) {
    // error checking
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <int> <int> ... <int>\n", argv[0]);
        return 1;
    }
    // copy into int array
    int sort[argc - 1];
    for (int i = 0, j = 1; i < argc - 1; i++, j++) {
        sort[i] = atoi(argv[j]);
    }

    mergesort(&sort);
    
    return 0;
}
