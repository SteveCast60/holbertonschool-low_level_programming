#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer with a copy of a string
 *@str: input value
 *Return: char pointer
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		l++;
	}
	ptr = malloc((l + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
		ptr[l] = '\0';
	}
	return (ptr);
}
