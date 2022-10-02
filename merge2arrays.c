// program to merge 2 arrays of the same length
// this forms the prototype for the merge function in the mergesort algorithm

#include <stdio.h>
#include <stdlib.h>


int *merge(int *a, int *b, int n) {
    int *c = malloc(sizeof(int) * n);

    int i = 0, j = 0, k = 0;
    while (i < 2*n) {
        if (a[i] < b[j]) {c[k++] = a[i++];}
        else if (b[j] < a[i]) {c[k++] = b[j++];}
        else {c[k++] = a[i++]; c[k++] = b[j++];}
    }

    return c;
    
}

int main(void) {
    int a[] = {1, 2, 3, 11, 16, 17, 19, 22, 29, 79};
    int b[] = {4, 9, 16, 25, 41, 45, 49, 66, 78, 79};


    int *c = merge(a, b, 10);
    for (int i = 0; i < 20; i++) {printf("%d\n", c[i]);}
}
