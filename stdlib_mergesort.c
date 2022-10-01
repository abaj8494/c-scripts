// running mergesort provided by stdlib

#include <stdio.h>
#include <stdlib.h>

#define key(A) (A)
#define less(A, B) (key(A) < key(B))

int main(void) {
    int a[] = {11, 6, 10, 7, 5, 1, 3, 2, 4, 8, 9};

    mergesort(a, 11, 4, less());

    for (int i = 0; i < 11; i++) printf("%d\n", a[i]);
}
