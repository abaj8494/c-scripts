// contains an implementation of euclids algorithm which returns the gcd of 2 numbers

#include <stdio.h>
#include "gcd.h"

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}
