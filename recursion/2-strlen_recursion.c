#include <stdio.h>

/**
 * _strlen_recursion - entry point
 * @s: input value
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return ((1) + _strlen_recursion(s + 1));
}
