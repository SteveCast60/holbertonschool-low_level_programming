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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t length = (len1 + len2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcpy(ptr + len1, s2);
	return (ptr);
}
