// sorts an array of integers taken as space delimited arguments

#include <stdio.h>
#include <stdlib.h>

int *b = malloc(sizeof(int) * r);

int *merge(int *a, int l, int m, int r) {
    int i, j, k;
    for (i = m+1; i > l; i--)
        b[i-1] = a[i-1];
    for (j = m; j < r; j++)
        b[r+m-j] = a[j+1];
    for (k = l; k <= r; k++)
        if (b[j] < b[i])
            a[k] = b[j--];
        else
            a[k] = b[i++];
    return b;
}

void msort(int *a, int p, int r) {
    // p is the start index, q is the middle, r is the end.
    // this convention makes sense if you think of the alphabet!
    if (p < r) {
        int q = (p + r) / 2;
        msort(a, p, q);
        msort(a, q + 1, r);
        merge(a, p, q, r);
    }
}

int main(int argc, char **argv) {
    // error checking
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <int> <int> ... <int>\n", argv[0]);
        return 1;
    }
    // copy into int array
    int a[argc - 1];
    for (int i = 0, j = 1; i < argc - 1; i++, j++) {
        a[i] = atoi(argv[j]);
    }

    msort(a, 0, argc - 1);
    for (int i = 0; i < r; i++) {
        printf("%d\n", b[i]);
    }
    
    return 0;
}
