#include <stdio.h>

// Función para establecer un bit específico en un número dado
void set_bit(unsigned long int *num, int bit_position) {
    unsigned long int mask = 1UL << bit_position;
    *num |= mask;
}
