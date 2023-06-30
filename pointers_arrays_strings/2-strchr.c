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
	int i;

	for (i = 0; i < c; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
