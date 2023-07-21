#include "variadic_functions.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum_nums_all = 0;
	va_list args;
	va_start(args, ctr);
	for (i = 0; i < ctr; i++)
	{
		int n = va_arg(args, int);
		sum_nums_all += n;
	}
	va_ends(args);
	return sum_nums_all;

	if (n == 0)
	{
		return (0);
	}
}
