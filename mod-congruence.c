// solves the integer values which satisfy the equation ax $\congruent$ c (mod b)
// uses the euclidean algorithm

#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

int main(int argc, char **argv) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s a b c\n", argv[0]);
        return  1;
    }
    int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]), x, y; 
    int d = gcd(a, b, &x, &y);

    // ax equiv b (mod) c => ax + by = c
    if (!(d % b)) printf("no solutions\n");
    else {
        for (int i = 0; i < d; i++) {
            if (x < 0) x %= c;
            printf("x is : %d\n",x);
            printf("solution at %d\n", x*c/d + i*b/d);
        }
    }
    printf("gcd: d x y %d %d %d\n", d, x, y);
    return 0;
    
}
