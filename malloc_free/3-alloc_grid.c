#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer 2 dimensional array
 *@width: input value
 *@@height: input value
 *Return: int pointer
 */



int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}
	if (ptr[i] == NULL)
	{
		for (j = 0; j < width; j++)
		{
			free(ptr[j]);
			free(ptr);
		}
	}
	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}
	return (ptr);
}
