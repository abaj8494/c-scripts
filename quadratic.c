#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	double disc = b*b - 4*a*c;
	if (disc < 0) {
printf("No real roots.\n");		
		return 0;
	}
	double root1 = (-b + sqrt(disc))/(2*a);
	double root2 = (-b - sqrt(disc))/(2*a);	
	printf("Roots at %.4lf and %.4lf\n", root1, root2);
	return 0;
}
