#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	char *acceptPtr = accept;
	unsigned int length = 0;
	int found = 0;

	while (*s != '\0')
	{
		found = 0;

		while (*acceptPtr != '\0')
		{
			if (*s == *acceptPtr)
			{
				found++;
			}
			acceptPtr++;
		}
		length++;
		s++;
	}
	return (length);
}
