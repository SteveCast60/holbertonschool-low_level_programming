#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: pointer of function
 * @n: entry point of array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
