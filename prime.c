// checks if an integer is prime

#include <stdio.h>
#include <stdlib.h>
#include "is-prime.h"


int main (int argc, char **argv) {
    int p = atoi(argv[1]);
    printf("%d",is_prime(p));
    return 0;
}
