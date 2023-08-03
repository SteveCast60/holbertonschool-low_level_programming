#include <stddef.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *str;
    struct node *next;
} list_t;

list_t *add_node(list_t **head, const char *str) {
    if (str == NULL) {
        return NULL; // Invalid input
    }

    // Allocate memory for the new node
    list_t *new_node = (list_t *)malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL; // Memory allocation failure
    }

    // Duplicate the input string
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return NULL; // Memory allocation failure
    }

    // Update the next pointer of the new node to point to the current head
    new_node->next = *head;

    // Update the head to point to the new node
    *head = new_node;

    return new_node;
}

