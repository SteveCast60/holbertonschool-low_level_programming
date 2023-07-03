#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: input value
 * Return: Always 0 (success)
 */

void puts_recursion(char *s);
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	puts_recursion(s + 1);
}
