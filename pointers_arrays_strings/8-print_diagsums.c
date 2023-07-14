#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int sum_main = 0;
	int sum_secondary = 0;

	for (int i = 0; i < size; i++)
	{
		sum_main += *(a + i * size + i);
		sum_secondary += *(a + i * size + (size - 1 - i));}
