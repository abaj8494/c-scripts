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
    int a = atoi(argv[1]), b = atoi(argv[2], c = atoi(argv[3])); 
    int d = gcd(a, b);

    printf("gcd is %d %d\n", d,c);
    
}
