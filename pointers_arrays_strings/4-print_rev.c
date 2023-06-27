#include "main.h"
#include <stdio.h>

/**
 * print_rev - function prints string in reverse
 * @s: argument of function
 * Return: 0
 */

void print_rev(char *s) {

	int length = strlen(s);
	
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
