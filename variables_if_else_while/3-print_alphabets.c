#include <stdio.h>

/* main - entry point of program*/

/* Description: program that print the alphabet in lowercase and uppercase */

int main(void)
{
	char lowercase[27];
	char uppercase[27];
	int i;
	/* Llenar el alfabeto en minúsculas */
	for(i = 0; i < 26; i++) 
	{
		lowercase[i] = 'a' + i;
	}
	lowercase[26] = '\0';

	/* Llenar el alfabeto en mayúsculas */
	for(i = 0; i < 26; i++) 
	{
		uppercase[i] = 'A' + i;
	}
	uppercase[26] = '\0';

	printf("%s%s\n", lowercase, uppercase);

	return (0);
}
