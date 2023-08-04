#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - entry point
 * @**h: pointer to struct
 * @idx: input
 * @n: input
 * */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new_node->n = n;

	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
