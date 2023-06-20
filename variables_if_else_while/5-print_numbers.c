#include <stdio.h>

/* main - entry point of program*/

/* Description: program that prints the numbers base 10 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return 0;
}
