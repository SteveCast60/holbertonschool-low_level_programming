#include <stdio.h>
#include <stdlib.h>

/* main - Entry point of program */

/* Description: program that prints all single digit numbers base 10. */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar (x + '0');
	}

	putchar ('\n');
	return (0);
}
