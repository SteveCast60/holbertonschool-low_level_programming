#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Changes the lowercase to uppercase
 * @str: string of function
 * Return: str char
 */

char *string_toupper(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return str;
}
