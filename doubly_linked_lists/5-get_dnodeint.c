#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *@head: Pointer to the head of the doubly linked list.
 *@index: Index of the node to retrieve (starting from 0).
 *
 *Return: Pointer to the nth node, or NULL if the node does not exist.
 */

size_t print_dlistint(const dlistint_t *h)
{
	    size_t node_count = 0;
	        while (h != NULL)
			    {
				            printf("%d\n", h->n);
					            h = h->next;
						            node_count++;
							        }
		    return node_count;
}

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	    unsigned int i = 0;
	        const dlistint_t *current = head;

		    while (current != NULL && i < index)
			        {
					        current = current->next;
						        i++;
							    }
		        return (dlistint_t *)current;
}
