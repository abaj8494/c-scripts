// sorts an array of integers taken as space delimited arguments
// [[October  1st, 2022]] not working...

#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int l, int m, int r) {
    int *b = malloc(sizeof(int) * (r - l));

    printf("the array a is: [%d,%d,%d,%d,%d,%d,%d,%d]\n", a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
    printf("l -> %d\nm -> %d\nr -> %d\n", l, m, r);
    int i = l, j = m + 1, k = l;
    while (i < m + 1 && j < r + 1) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
            b[k++] = a[j++];
            // if about to exit, copy the rest of the array into b
            if (i == m + 1) {
                printf("in loop\n");
            }
        }
        else {
            b[k++] = a[j++];
            b[k++] = a[i++];
            // if about to exit, copy the rest of the array into b
            if (j == r + 1) {
                printf("in loop\n");
            }

        }
        for (int n = l; n < r; n++) {
            a[n] = b[n];
            printf("%d", a[n]);
        }
    }
    printf("\n");
}


void msort(int *a, int l, int r) {
    // l is the left index, m is the middle, r is the right.
    if (l < r) {
        int m = (l + r) / 2;
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
