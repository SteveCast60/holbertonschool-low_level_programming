#include <stdio.h>
/* main - Entry point of program */

/* Description: Program that prints the alphabet less the letters q and e */


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
}

	putchar('\n');

	return (0);
}
