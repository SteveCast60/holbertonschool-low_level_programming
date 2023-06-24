#include <stdio.h>
#include "main.h"

/**
 * _putchar - function
 * @c: parameter of function
 * print_most_numbers - Entry point of program
 * Return: 0
 */

void _putchar(char c)
{
	putchar(c);
}

void print_most_numbers()
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
