// contains an implementation of euclids algorithm which returns the gcd of 2 numbers

#include <stdio.h>
#include "gcd.h"

int gcd(int a, int b) {
    int r = a % b;
    int q = (a - r) / b;
    printf("r %d\n",r);
    if (r) gcd(b, r);
    printf("r %d\n",r);
    printf("b %d\n", b);
    return b;
}
