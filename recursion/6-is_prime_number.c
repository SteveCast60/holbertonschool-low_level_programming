#include <stdio.h>

/* function that checks if an input integer n is a prime*/

/**
 * is_prime_number_helper - program that checks prime numbers
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

/**
 * is_prime_number - program that calls aux function
 * @n: input
 * Return: Always 0 (success)
 */

int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
