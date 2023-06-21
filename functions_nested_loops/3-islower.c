#include <stdio.h>

/**
 * _islower - entry point of program
 *
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

