#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
        char _char
	int _int
	long int _long_int
	long long int long_long_int
	float _float

	printf("Size of a char: %li byte(s)", sizeof(_char));
	printf("Size of an int: %li byte(s)", sizeof(_int));
	printf("Size of a long int: %li bytes(s)", sizeof(_long int));
	printf("Size of a long long int: %li bytes(s)", sizeof(_long long int));
	printf("Size of a float: %li bytes(s)", sizeof(_float));
	return (0);
}i
