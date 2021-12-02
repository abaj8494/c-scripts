#include <stdio.h>

int remove_duplicates(int length, int source[length], int destination[length]) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (source[i] == source[j] && i != j) {
                source[j] = -1;
            }
        }
    }
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (source[i] > -1) destination[j++] = source[i];
    }
    return j;
}

int main(void) {
    return 0;
}