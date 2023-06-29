#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words os a string
 * @str: string of function
 * Return: str char
 */

char *cap_string(char *str)
{
	int i = 0;
	int capitalizar = 1;
	while (str[i] != '\0')
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalizar = 1;
		}
		else if (capitalizar)
		{
			str[i] = toupper(str[i]);
			capitalizar = 0;
		}
		else if (str[i] == '-' && !isspace(str[i + 1]) && !ispunct(str[i + 1]))
		{
			capitalizar = 0;
		}
		i++;
	}
	return str;
}
