#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - function that prints name
 *@name: input
 *@f: input
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
