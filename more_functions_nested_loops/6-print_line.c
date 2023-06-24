#include <stdio.h>
#include "main.h"
/**
 * print_line -Entry point of program
 *
 * Return: 0
 */

int print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

