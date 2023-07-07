#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: index of arguments
 * @argv: vector of argc
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	
	if (argc >= 0)
	{
		for (i = 0; i < *argv[0]; i++)
		{
			*argv++
		}
		printf("%s\n", i);
	}
	return (0);
}


