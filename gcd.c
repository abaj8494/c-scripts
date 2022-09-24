// program to recursively find the the greatest common divisor of 2 integers
// given as command line arguments

// implements euclids algorithm

#include <stdio.h>
#include <stdlib.h>

int q_func(int a, int b) {
    return a % b;
}

int r_func(int a, int b, int q) {
    return q * b - a;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <integer 1> <integer 2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]), b = atoi(argv[2]);

    int q = q_func(a, b);
    
    while (!r(a, b, q)) {
        a = b;
        b = r;
        q = q_func(a, b);
    }

    printf("b is: %d", b);
    return 0;
}
