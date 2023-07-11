#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - function that concatenates two strings.
 *@s1: input value
 *@s2: input value
 *Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, y; 
	int l1 = 0;
	int l2 = 0;
	int length;
	
	 if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }

	for (i = 0; s1[i]; i++)
	{
		l1++;
	}
	for (j = 0; s2[j]; j++)
	{
		l2++;
	}
	length = (l1 + l2);
	
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < i; y++)
	{
		ptr[y] = s1[y];
	}
	for (y = 0; y < j; y++)
	{
		ptr[y + i] = s2[y];
	}
	return (ptr);
}
