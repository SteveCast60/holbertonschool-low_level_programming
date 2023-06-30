#include "main.h"
#include <stdio.h>

/**
 *_strchr - function that locates a character in a string.
 *@s: input value.
 *@c: input value.
 *Return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			*s = "";
		}
		s++;
	}
	return NULL;
}
