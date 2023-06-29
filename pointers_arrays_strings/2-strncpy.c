#include "main.h"
#include <stdio.h>

/**
 *_strncpy - function that copy a string.
 *@dest: destiny of copy
 *@src: enter point of program
 *@n: iterancy number
 *return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (result);
}
