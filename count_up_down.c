// program to count from 0 to the number specified, 
#include <stdio.h>

int main() {
    int user_num = 0, i = 0;
    printf("Enter number: ");
    scanf("%d", &user_num);
    while (1) {
        if (user_num > 0) {
            printf("%d\n", i);
            i++;
            if (i == user_num + 1) break;
        }
        if (user_num < 0) {
            printf("%d\n", i);
            i--;
            if (i == user_num - 1) break;
        }
    }
} 