// sorts an array of integers taken as space delimited arguments

#include <stdio.h>
#include <stdlib.h>

int *merge(int *a, int p, int q, int r) {
    int i = p, j = q + 1, k = p;
    int b = malloc(sizeof(int) * r);
    while (i < q + 1 && j < r + 1) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
            k++;
            if (i == q + 1) {
                for (int m = j; m < r; m++) {
                    b[k-j+m] = a[m];
                }
            }
            else {
                b[k] = a[j];
                j++;
                k++;
                if (j == r + 1) {
                    for (int m = i; m < q; m++) {
                        b[k-i+m] = a[m];
                    }
                }
            }
            for (int n = p; n < r; n++) {
                a[n] = b[n];
            }

        }
    }
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
    
    return 0;
}
