#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: index of arguments
 * @argv: vector of argc
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	int length = sizeof(*argv);
	
	printf ("%d\n", length);

	return(0);
}
