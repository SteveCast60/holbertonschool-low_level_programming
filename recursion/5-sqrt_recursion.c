#include <stdio.h>

/**
 * _sqrt_recursion - entry point of program
 *_sqrt_recursion_aux - entry point auxiliar function
 * @n: input
 * @start: input
 * @end: input
 * Return: Always 0 (success)
 */

int _sqrt_recursion_aux(int n, int y)
{
	if (n > (y * y))
	{
	y++;
	}
	else if(n < (y * y))
	{
		return (-1);
	}
	else if (n == (y * y))
	{
		return (y);
	}
	return _sqrt_recursion_aux((n), y++);
}

int _sqrt_recursion(int n)
{
	return _sqrt_recursion_aux(n, 1);
}
