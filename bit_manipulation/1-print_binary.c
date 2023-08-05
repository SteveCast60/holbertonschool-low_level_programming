#include <stdio.h>

void print_binary(unsigned long int n) {
    int bits = sizeof(unsigned long int) * 8; // Number of bits in unsigned long int

    // Start from the most significant bit and shift right to the least significant bit
    for (int i = bits - 1; i >= 0; i--) {
        unsigned long int mask = 1UL << i; // Create a mask with the bit at position i set to 1

        // Check if the bit at position i is set in the number n
        if (n & mask) {
            printf("1");
        } else {
            printf("0");
        }
    }
}
