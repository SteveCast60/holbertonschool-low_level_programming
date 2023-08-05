#include <stdio.h>

/**
 * set_bit - entry point
 * @num: pointer
 * @bit_position: input
 * Return: Always 0 (success)
 */

void set_bit(unsigned long int *num, int bit_position)
{
	unsigned long int mask = 1UL << bit_position;
	*num |= mask;
}
