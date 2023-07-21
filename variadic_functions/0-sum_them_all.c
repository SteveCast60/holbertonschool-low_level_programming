#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum_nums_all = 0;
	va_list args;
        va_start(args, n);

	if (n == 0)
        {
                return (0);
        }
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		sum_nums_all += num;
	}
	va_end(args);
	return (sum_nums_all);
}
