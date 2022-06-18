// a program to demonstrate the difference in ++i and i++
// and why we should be using them in place of i = i + 1

// written by aayush bajaj on [[December 31st, 2021]]

#include <stdio.h>

// declarations
void pre_increment();
void post_increment();


int main(void) 	
{
	printf("pre-increment\n");
	pre_increment();
	printf("post-increment\n");
	post_increment();
	return 0;
}


// increments the value of i before the operation begins
void pre_increment()
{
	int i = 0; 
	while (i < 5) {
		printf("%d\n", ++i);
	}
}

// increments the value of i after the operation is over
void post_increment()
{
	int i = 0;
	while (i < 5) {
		printf("%d\n", i++);
	}
}


///////////////////////////////////////////////////////////////////////////////
// why do we use increment instead of i = i + 1?
// 		- natural 
// 		- easier to increment complex expressions 
// 		- creates code that is easier to read.
