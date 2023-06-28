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
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
