#include <stdlib.h>
#include "lists.h"

/**
 *  * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 *   * @head: A pointer to the pointer to the head node.
 *    * @index: The index of the node to be deleted. Index starts at 0.
 *     *
 *      * Return: 1 if it succeeded, -1 if it failed.
 *       */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	    dlistint_t *current, *temp;

	        if (head == NULL || *head == NULL)
			        return (-1);

		    current = *head;

		        if (index == 0)
				    {
					            *head = (*head)->next;
						            if (*head)
								                (*head)->prev = NULL;
							            free(current);
								            return (1);
									        }

			    while (index > 0)
				        {
						        if (current == NULL)
								            return (-1);
							        current = current->next;
								        index--;
									    }

			        if (current == NULL)
					        return (-1);

				    temp = current->prev;
				        temp->next = current->next;

					    if (current->next)
						            current->next->prev = temp;

					        free(current);

						    return (1);
}
