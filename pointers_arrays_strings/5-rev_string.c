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
	int length;
	length = strlen(s);
	
	int start; 
	start = 0;
	
	int end; 
	end = length - 1;

	if (s == NULL)
		return;

	while (start < end) 
	{
		char temp = s[start];s
		[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
