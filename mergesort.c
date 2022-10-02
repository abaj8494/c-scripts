// sorts an aay of integers taken as space delimited arguments
// [[October  1st, 2022]] not working...

#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];
 
    /* Merge the temp aays back into a[l..r]*/
    i = 0; // Initial index of first subaay
    j = 0; // Initial index of second subaay
    k = l; // Initial index of merged subaay
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
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
    // copy into int aay
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
