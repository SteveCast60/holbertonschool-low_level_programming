#include "main.h"
#include <stdio.h>
/**
 *_strcat - function that concatenates two strings
 *@dest: argm function string 1
 *@src: argm function string 2
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i]=src[j];
		i++;
	}
	dest[i] = '\0';
	printf ("%s", dest);
}
