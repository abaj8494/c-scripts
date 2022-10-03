// checks if an integer is prime

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <prime.h>

bool prime(int p) {
    int n = (int) sqrt(p);
    for (int i = 2; i < n; i++) {
        if ((!p % i)) return false;
    }
}

int main (int argc, char **argv) {
    int p = atoi(argv[1]);
    printf("%d",prime(p));
    return 0;
}
