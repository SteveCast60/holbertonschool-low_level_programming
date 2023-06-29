#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function compares two strings
 * @s1: parameter of function
 * @s2: argument of function
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
