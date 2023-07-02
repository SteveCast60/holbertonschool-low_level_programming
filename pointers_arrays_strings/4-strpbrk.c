#include <stdio.h>

/**
 * _strpbrk - Enter point of program
 * @s: input value
 * @accept: input value
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *acceptPtr = accept;

	while (*s != '\0')
	{
		while (*acceptPtr != '\0')
		{
			if (*s == *acceptPtr)
			{
				return (s);
			}
			acceptPtr++;
		}
		s++;
	}
	return (NULL);
}
