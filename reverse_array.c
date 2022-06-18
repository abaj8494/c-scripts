#include <stdio.h>

int main(void) {
    int nums[101];
    int i = 0;
    printf("Enter numbers forwards: \n");
    while (scanf("%d", &nums[i]) == 1) {
        i++;
    }
    printf("Reversed: \n");
    for (i -= 1; i >= 0; i--) {
        printf("%d\n", nums[i]);
    }
    return 0;
}