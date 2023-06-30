#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		if (s == c[i])
		{
			return (s);
		}
		else
		{
			return ('\0');
		}
	}
	return (s);
}
