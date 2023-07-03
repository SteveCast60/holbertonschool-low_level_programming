#include <stdio.h>

/**
 * factorial - entry point
 * @n: input value
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
