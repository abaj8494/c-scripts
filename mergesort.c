// sorts an array of integers taken as space delimited arguments

#include <stdio.h>
#include <stdlib.h>

int *b;

void merge(int *a, int l, int m, int r) {
    int i, j, k;
    for (int i = m + 1; i > l; i--) b[i - 1] = a[i - 1];
    for (int j = m; j < r; j++) b[r + m - j] = a[j + 1];
    for (int k = l; k <= r; k++) {
        if (b[j] < b[i]) a[k] = b[j--];
        else a[k] = b[i++];
    }
}

void msort(int *a, int l, int r) {
    // l is the left index, m is the middle, r is the right.
    int m = (l + r) / 2;
    if (l < r) {
        msort(a, l, m);
        msort(a, m + 1, r);
        return;
        merge(a, l, m, r);
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

    b = malloc(sizeof(int) * argc);
    msort(a, 0, argc - 1);
    for (int i = 0; i < argc - 1; i++) {
        printf("%d\n", b[i]);
    }
    
    return 0;
}
