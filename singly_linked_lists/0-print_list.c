#include <stdio.h>
#include <stddef.h>


typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("0");
		}
		else
		{
			printf("%s", h->str);
		}
		h = h->next;
		if (h != NULL)
		{
			printf(", ");
		}
		count++;
	}
	printf("]\n");
	return count;
}
