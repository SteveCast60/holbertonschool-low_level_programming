#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - entry point of program
 *@s: argument of function
 *Return: 0
 */

void rev_string(char *s)  
{
	int i, len, temp;
	len = strlen(s);
	
	for (i = 0; i < len/2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}  
