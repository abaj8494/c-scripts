// contains an implementation of euclids algorithm which returns the gcd of 2 numbers

#include <stdio.h>
#include "gcd.h"

int gcd(int a, int b) {
    int r = a % b;
    int q = (a - r) / b;
    printf("a q b r %d %d %d %d\n",a, q, b, r);
    if (r) gcd(b, r);
    printf("end a q b r %d %d %d %d\n",a, q, b, r);
    return b;
}
