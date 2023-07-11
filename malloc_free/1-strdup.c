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
	char *ptr;
	size_t length = strlen(str);

	if (str == NULL)
        {
                return (NULL);
        }

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
