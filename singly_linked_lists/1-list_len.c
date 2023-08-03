#include <stddef.h>

typedef struct node {
    int data;
    struct node *next;
} list_t;

size_t list_len(const list_t *h) {
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

