#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	double disc = b*b - 4*a*c;
	if (disc < 0) {
printf("<items><item><title>No real roots.</title><subtitle></subtitle><icon>icon.png</icon></item></items>");		
		return 0;
	}
	double root1 = (-b + sqrt(disc))/(2*a);
	double root2 = (-b - sqrt(disc))/(2*a);	
	printf("<items><item><title>Roots at \"%.4lf\" and \"%.4lf\"</title><icon>icon.png</icon></item></items>", root1, root2);
	return 0;
}
