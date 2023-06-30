#include "main.h"
#include <stdio.h>

/**
 *_memset - function that fills memory with a constant byte.
 *@s: input value
 *@b: input value
 *@n: input value
 *Return: s char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b
	}
	return (s);
}

