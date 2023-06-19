#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Prints positive or negative*/
/* main - Entry point of the program*/
/* Description: This function is the entry point of the program.*/
/* It prints whether a given number is positive or negative.*/
/* Return: Always 0 (Success)*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0.0)
		printf("%i is negative\n", n);
	else if (n > 0.0)
		printf("%i is positive\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
