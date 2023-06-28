#include "main.h"
#include <stdio.h>
/**
 * _strncat function concatenates two strings
 * @dest: parameter of function
 * @src: argm function
 * @n: argm function
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	
	for (i = 0; dest[i] != '\0'; i++);
	
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
