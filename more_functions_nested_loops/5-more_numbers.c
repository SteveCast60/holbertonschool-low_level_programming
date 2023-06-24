#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point of program
 *
 * Return: 0
 */

void more_numbers()
{
	char numbers[] = "01234567890123456789\n";
	int i, j;
	
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 20; i++)
		{
			printf("%c", numbers[i]);
		}
	}
}
