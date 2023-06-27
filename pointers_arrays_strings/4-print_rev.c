#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function prints string in reverse
 * @s: argument of function
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	for(int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
