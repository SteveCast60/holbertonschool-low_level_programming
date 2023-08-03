#ifndef LISTS_H
#define LISTS_H

/* Definición de la estructura list_t */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Prototipo de la función print_list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

