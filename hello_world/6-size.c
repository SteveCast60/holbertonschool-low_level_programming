/*
*File: 6-size.c
*Auth: Brennan D Baraba
*/
#include <stdio.h>
/**
 *main - Prints the size of various types based on
 *       the computer it is compiled and run on..
 *Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
