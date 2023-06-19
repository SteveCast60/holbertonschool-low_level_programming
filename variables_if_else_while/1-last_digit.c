#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i", n);
	printf("is");
	if (n > 5 );
	{
		printf("and is greater than 5");
	
		if (n == 0); 
		{
			printf("and is 0");

			else (n < 6 & n != 0);
			{
			printf("and is less than 6 and not 0");
			}
		}	
	}	
	return (0);
}
