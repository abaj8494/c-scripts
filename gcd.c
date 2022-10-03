// contains a recursive implementation of euclids algorithm which returns the gcd of 2 numbers

#include <stdio.h>
#include "gcd.h"

/* this is the simple algorithm
int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}
*/

int gcd(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcd( b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
