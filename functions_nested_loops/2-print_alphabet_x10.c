#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet_x10 - entry point of program
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

		putchar('\n');
	}

}
