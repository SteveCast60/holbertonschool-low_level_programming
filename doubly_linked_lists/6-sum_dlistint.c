#include <stdio.h>

/**
 * sum_dlistint - Entry point
 * @head - input
 */

int sum_dlistint(dlistint_t *head) 
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
