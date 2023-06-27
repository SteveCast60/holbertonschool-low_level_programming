#include "main.h"
#include <stdio.h>

/**
 * puts2 - function prints character of a string
 * @str: argument of function 
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	i = 0;
	char s[32] = "";
	
	for(i < strlen(str); i+=2)
	{
		putchar(str[i]);
		s[i/2]=str[i];
	}
	printf("\n\n2nd option\n%s", s);
	return 0;
}
