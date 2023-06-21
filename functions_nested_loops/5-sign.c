#include <stdio.h>
/**
 * print_sign - entry point of program
 *
 * Return: 0
 */


int print_sign(int n)
{
	int test;
	
	if (n > 0)
	{
		test = 1;
		putchar('+');
		putchar(test);
	}
	else if (n == 0)
	{
		test = 0;
		putchar('0');
		putchar(test);
	}
	else
	{
		test = -1;
		putchar('-', test);
		putchar(test)
	}
	return (0);
}
