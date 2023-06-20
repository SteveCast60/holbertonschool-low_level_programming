#include <stdio.h>
/* main - entry point of program */

/* Description: program that prints the lowercase alphabet in reverse */

int main(void) 
{
	int letter;
	
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	
	putchar('\n');
	
	return (0);
}
