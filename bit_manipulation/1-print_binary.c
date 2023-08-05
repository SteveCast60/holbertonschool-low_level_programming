#include <stdio.h>

void print_binary(unsigned long int n)
{
	int i;
	int bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;
		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
