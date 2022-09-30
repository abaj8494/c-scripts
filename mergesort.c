// sorts an array of integers taken as space delimited arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <int> <int> ... <int>\n", argv[0]);
        return 1;
    }
    printf("argc: %d", argc);
    return 0;
}
