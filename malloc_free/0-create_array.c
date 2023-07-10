#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return(NULL);
	}
	str = malloc(size * sizeof(char));
	
	if (str == NULL)
	{
		return(NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return(str);
}