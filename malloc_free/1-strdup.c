#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
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
	strcpy(ptr, str);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
