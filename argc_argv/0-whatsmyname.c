#include <stdio.h>

/**
 * main - print name of program
 * @argc: index of arguments
 * @argv: vector of argc
 * Return: Always 0 (success)
 */

int main (int argc, char *argv[])
{
	if (argc >= 0)
	{
	        printf("%s\n", argv[0]);
	}
	return (0);
}
