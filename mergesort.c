// sorts an array of integers taken as space delimited arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    // error checking
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <int> <int> ... <int>\n", argv[0]);
        return 1;
    }
    // copy into int array
    int to_sort[argc - 1];
    for (int i = 0, j = 1; i < argc - 1; i++, j++) {
        to_sort[i] = atoi(argv[j]);
        printf("to_sort[i] = %d\n", to_sort[i]);
    }


    return 0;
}
