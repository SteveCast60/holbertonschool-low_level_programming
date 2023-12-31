#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - function that prints all numbers
 *@n: input value
 *@separator: value strings
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num, unsigned int);
		printf("%d", x);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
