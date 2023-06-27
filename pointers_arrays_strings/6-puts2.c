#include "main.h"
#include <stdio.h>

/**
 * puts2 - function prints character of a string
 * @str: argument of function 
 * Return: 0
 */

int main(void)
{
	char* p = "hello world";
	char s[32] = "";
	
	for(int i = 0; i < strlen(p); i+=2)
	{
		putchar(p[i]);
		s[i/2]=p[i];
	}
	printf("\n\n2nd option\n%s", s);
	return 0;
}
