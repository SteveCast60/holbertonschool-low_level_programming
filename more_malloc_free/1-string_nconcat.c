#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two string
 *@s1 - input value
 *@s2 - input value
 *return: pointer ptr
 */	
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (n >= j)
		n = j;
	ptr = malloc(sizeof(char)*(i + n + 1));
	if (ptr == NULL)
		return (NULL)
	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];
	for (y = 0; y < i + n; y++)
		ptr[y] = s2[y - i];
	ptr[y] = '\0';
	return (ptr);
}


