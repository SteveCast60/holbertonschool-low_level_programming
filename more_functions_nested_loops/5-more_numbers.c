#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point of program
 *
 * Return: 0
 */

void more_numbers()
{
	char numbers[] = "01234567891011121314\n";
	int j;

	for (j = 0; j < 10; j++)
	{
		printf("%c", numbers[j]);
	}
}
