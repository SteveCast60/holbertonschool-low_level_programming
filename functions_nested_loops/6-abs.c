#include "main.h"

/**
 * _abs - entry point of program
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
