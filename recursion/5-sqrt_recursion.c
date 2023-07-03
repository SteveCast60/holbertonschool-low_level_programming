#include <stdio.h>

/**
 * _sqrt_recursion_helper - entry point
 * @n: input
 * @start: input
 * @end: input
 * Return: Always 0 (success)
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
	else 
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
}


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0, n));
}
