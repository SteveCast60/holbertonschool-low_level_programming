#include <stdio.h>

/**
 * main - entry point of program
 * Return: 0
 */

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
