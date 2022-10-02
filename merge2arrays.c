// program to merge 2 arrays of the same length
// this forms the prototype for the merge function in the mergesort algorithm

#include <stdio.h>


int *merge(int *a, int *b) {
    int *c = malloc(32);

    int i = 0, j = 0, k = 0;
    while (i < 8) {
        if (a[i] < b[j]) {c[k++] = a[i++];}
        else if (b[j] < a[i]) {c[k++] = b[j++];}
        else {c[k++] = a[i++]; c[k++] = b[j++];}
    }

    return c;
    
}

int main(void) {
    int a[] = {2, 3, 11, 19};
    int b[] = {4, 9, 16, 25};

    c = merge(a, b);
    for (int i = 0; i < 8; i++) {printf("%d\n"), c[i];}
}
