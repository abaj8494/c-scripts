// sorts an array of integers taken as space delimited arguments
// [[October  1st, 2022]] not working...

#include <stdio.h>
#include <stdlib.h>

#define key(A) (A)
#define less(A, B) (key(A) < key(B))


void merge(int a[], int l, int m, int r)
{
    int aux[8];
    printf("r:%d\n",r);
  int i, j, k;

  for (i = m+1; i > l; i--)
    aux[i-1] = a[i-1];
  for (j = m; j < r; j++)
    aux[r+m-j] = a[j+1];
  for (k = l; k <= r; k++)
    if (less(aux[j], aux[i]))
      a[k] = aux[j--];
    else
      a[k] = aux[i++];
  for (int i = 0; i < 8; i++) {a[i] = aux[i];}
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
