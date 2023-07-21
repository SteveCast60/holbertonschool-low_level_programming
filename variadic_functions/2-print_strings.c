#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 *print_strings - function that prints an string
 *@separator: separator commas
 *@n: input value
 *Return: Void
 */


void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(num, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", x);
		}
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
