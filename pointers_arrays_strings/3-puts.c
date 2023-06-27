#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point of program
 *@str: parameter of function
 *Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
