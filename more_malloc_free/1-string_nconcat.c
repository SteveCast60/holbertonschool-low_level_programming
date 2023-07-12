#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */	
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, y;
	int l1 = 0;
	int l2 = 0;
	int lenght;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		l1++;
	}
	for (j = 0; s2[j]; j++)
	{
		l2++;
	}
	lenght = (l1 + l2);
	ptr = malloc((lenght + 1) * sizeof(char));
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
