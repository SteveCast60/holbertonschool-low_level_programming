#include <stdio.h>

/**
 *_isalpha - entry point of program
 *@c: variable function
 *Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
