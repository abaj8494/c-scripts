// checks if an integer is prime

#include <stdio.h>
#include <stdlib.h>
#include "is-prime.h"


int main (int argc, char **argv) {
    int p = atoi(argv[1]);
    printf(is_prime(p) ? "true\n" : "false\n");
    return 0;
}
