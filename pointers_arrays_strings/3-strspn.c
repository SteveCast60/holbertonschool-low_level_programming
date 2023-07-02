#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(const char *s, const char *accept)
{
	const char *acceptPtr = accept;
	unsigned int length = 0;
	int found = 0;

	while (*s != '\0')
	{
		found = 0;

		while (*acceptPtr != '\0')
		{
			if (*s == *acceptPtr)
			{
				found = 1;
				break;
			}
			acceptPtr++;
		}
		if (!found)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
