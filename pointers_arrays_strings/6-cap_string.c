#include <ctype.h>

/**
 * cap_string - function that capitalizes all words os a string
 * @str: string of function
 * Return: str char
 */

char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
