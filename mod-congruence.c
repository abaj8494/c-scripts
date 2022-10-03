// solves the integer values which satisfy the equation ax $\congruent$ c (mod b)
// uses the euclidean algorithm

#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"
#include "mod.h"

int main(int argc, char **argv) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s a b c\n", argv[0]);
        return  1;
    }
    int a = atoi(argv[1]), b = atoi(argv[3]), c = atoi(argv[2]), x, y; 
    int d = gcd(a, b, &x, &y);

    // ax equiv b (mod) c => ax + by = c
    if (!(d % b)) printf("no solutions\n");
    else {
        printf("Solutions are: ");
        for (int i = 0; i < d; i++) {
            if (x < 0) x = mod(x,b);
            printf("%d ", (x + i * c/d) % c);
        }
        printf("\n");
    }
    return 0;
    
}
