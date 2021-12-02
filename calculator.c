#include <stdio.h>

int main() {
	int operation, num1, num2;
	int result = 0;
	printf("Enter instruction: ");
	scanf("%d %d %d", &operation, &num1, &num2);
	if (operation == 1)
		result = num1 + num2;
	else if (operation == 2)
		result = num1 - num2;
	printf("%d\n", result);
	return 0;
}

