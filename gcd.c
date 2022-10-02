// contains an implementation of euclids algorithm which returns the gcd of 2 numbers

#include <stdio.h>
#include "gcd.h"

int gcd(int a, int b) {
    int r = a % b;
    int q = (a - r) / b;
    if (r != 0) gcd(b, r);
    printf("r b %d %d\n",r, b);
    return b;
}
