#include "main.h"
#include <stdio.h>

/**
 *_strchr - function that locates a character in a string.
 *@s: input value.
 *@c: input value.
 *return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '/0')
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
