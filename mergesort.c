// sorts an array of integers taken as space delimited arguments
// [[October  1st, 2022]] not working...

#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int l, int m, int r) {
    int *b = malloc(sizeof(int) * (r - l));

    printf("l -> %d\nm -> %d\nr -> %d\n", l, m, r);
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
            if (i == m + 1) {
                for (int p = j; p <= r; p++) {b[k-j+p] = a[p];}
            }
        }
        else {
            b[k++] = a[j++];
            if (j == r + 1) {
                for (int p = i; p <= m; p++) {
                    b[k - i + p] = a[p];
                }
            }

        }
        for (int p = l; p < r; p++) {
            a[p] = b[p];
            printf("%d", b[p]);
        }
    }
    printf("\n");
    free(b);
}


void msort(int *a, int l, int r) {
    // l is the left index, m is the middle, r is the right.
    int m = (l + r) / 2;
    if (l < r) {
        msort(a, l, m);
        msort(a, m + 1, r);
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

    msort(a, 0, argc - 2);

    for (int i = 0; i < argc - 1; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
