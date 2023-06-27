#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: argument of function
 * Return: 0
 */

void puts_half(char *str)
{
	int start_index;
	int length;
	length = strlen(str);

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	printf("%s", &str[start_index]);
}
