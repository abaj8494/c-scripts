// testing modulo for negative numbers

#include <stdio.h>


int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main(void) {
    printf("-16 mod 51 is : %d\n", -16 % 51);
    int g = gcd(-16, 51);
    printf("g: %d\n", g);
    return 0;
}
