#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: pointer of function
 * @n: entry point of array
 * Return: 0
 */

void print_array(int *a, int n);
{
	int i;
	int j = 0;

	while (n[j] != 0)
	{
		j++;
	}
	
	for (i = 0; i < j; i++)
	{
	putchar (n[i]);
	printf (", ");
	}
putchar('\n');
}
