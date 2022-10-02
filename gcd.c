// contains an implementation of euclids algorithm which returns the gcd of 2 numbers

#include <stdio.h>
#include "gcd.h"

int gcd(int a, int b) {
    int r = a % b;
    int q = (a - r) / b;
    printf("a r b %d %d %d\n",a, r, b);
    if (r) gcd(b, r);
    return b;
}
