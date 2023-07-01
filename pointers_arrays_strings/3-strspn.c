#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	char **i = *accept
	int cont;
	int result;

	while (**i != '\0')
	{
		cont++;
		result = cont;
	}
	return (result);
}

