#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point of program
 *@str: parameter of function
 *Return: 0
 */

void _puts(char *str)
{
	printf("%s\n", str);

}

int main()
{
	char *message = "Hello, world!";
	_puts(message);
	
	return 0;
}
