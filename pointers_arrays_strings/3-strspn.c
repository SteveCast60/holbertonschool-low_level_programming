#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	char
	int i;
	int cont;
	int result;

	for (i = 0; i < accept && accept != '\0'; i++)
	{
		while (*s == *accept[i])
		{
			result = (cont + 1);
		}
	}
	return (result);
}
