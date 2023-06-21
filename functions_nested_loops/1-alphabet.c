#include <stdio.h>
#include <unistd.h>

/**
 *print_alphabet - entry point of program
 * Return: 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
