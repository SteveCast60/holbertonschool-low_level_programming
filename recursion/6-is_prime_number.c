#include <stdio.h>

/**
 * _is_prime_number: entry point of program
 * _is_prime_number_helper: auxiliar function
 * @n: input
 * @divisor: input
 * Return: Always 0 (success)
 */

int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, divisor + 1));
}
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
