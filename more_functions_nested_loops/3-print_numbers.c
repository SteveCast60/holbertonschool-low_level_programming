#include "main.h"
#include <stdio.h>

/**
 *print_numbers - Entry point of program
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
}
