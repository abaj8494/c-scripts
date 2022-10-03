// checks if an integer is prime

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv) {
    int p = atoi(argv[1]);
    int max = (int) sqrt(p);
    printf("p max : %d %d", p, max);
    return 0;
}
