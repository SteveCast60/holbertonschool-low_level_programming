#include <stdio.h>

int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        // The index is out of range
        return -1;
    }

    // Create a mask with the bit at the given index set to 1
    unsigned long int mask = 1UL << index;

    // Set the bit at the given index to 1 using a bitwise OR operation
    *n |= mask;

    return 1;
}
