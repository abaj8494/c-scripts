#include <stdio.h>

int main() {
	int character = getchar();
	while (character != EOF) {
		if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u') {
			putchar(character);
		}
		character = getchar();	
	}
	return 0;
}
