#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Definición de la estructura dlistint_t */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Prototipo de la función para imprimir todos los elementos de la lista */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
