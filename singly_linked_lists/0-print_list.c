#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 *@h: input value
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;
	
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		i++;
	}
	return (i);
}
