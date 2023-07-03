#include <stdio.h>

/**
 * _puts_recursion - entry point
 * @s: input value
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
