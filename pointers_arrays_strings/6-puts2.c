#include "main.h"
#include <stdio.h>

/**
 * puts2 - function prints character of a string
 * @str: argument of function
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	
	i = 0;

	if (str == NULL)
	return;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
