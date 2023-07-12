#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers
 *@min: input value
 *@max: input value
 *Return: ptr pointer
 */

int *array_range(int min, int max)
{
	int x;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x <= max - min; x++)
		ptr[x] = min + x;
	return (ptr);
}
