#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void print_list(list_t *h)
{
    while (h != NULL)
    {
        printf("[%lu] %s\n", h->len, h->str);
        h = h->next;
    }
}


/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    if (str == NULL)
        return NULL;

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    char *duplicate_str = strdup(str);
    if (duplicate_str == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->str = duplicate_str;
    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        list_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}
