#include "main.h"
#include <stdio.h>

/**
 *reverse_array - function that reverse a array
 *@a: array that pass a string
 *@n: iterancy number of array
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
