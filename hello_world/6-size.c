#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu byte(s)\n", ((unsigned long)sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
