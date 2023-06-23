#include "main.h"
/**
 * _isupper - entry point of program
 *@c: argument of function
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); /*is uppercase*/
	}
	else
	{
		return (0); /* is not uppercase*/
	}
}
