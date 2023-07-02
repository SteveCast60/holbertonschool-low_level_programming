#include <stdio.h>

char* _strpbrk(char* s, char* accept)
{
	char *acceptPtr;

	while (*s != '\0')
	{
		*acceptPtr = accept;

		while (*acceptPtr != '\0')
		{
			if (*s == *acceptPtr)
			{
				return s;
			}
			acceptPtr++;
		}
		s++;
	}
	return NULL;
}
