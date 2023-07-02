#include <stdio.h>

/**
 * _strpbrk - Enter point of program
 * @s: input value
 * @accept: input value
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
