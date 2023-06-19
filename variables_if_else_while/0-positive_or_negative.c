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
	if (n < 0.0)
        printf ("%i\n is negative", n);
    	else if (n > 0.0)
        printf ("%i\n is positive", n);
    	else
        printf ("%i\n is zero", n);
	return (0);
}
