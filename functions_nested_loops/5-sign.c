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
	}
	else if (n == 0)
	{
		test = 0;
		putchar('0');
	}
	else
	{
		test = -1;
		putchar('-');
	}
	return (test);
}
