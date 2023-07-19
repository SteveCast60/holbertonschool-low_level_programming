#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - function that search one integer
 *@array: array of function
 *@size: long of array
 *@cmp: function pointer
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		(cmp(array[c]) != 0);
		{
			return (c);
		}
	}
	return (-1);
}
