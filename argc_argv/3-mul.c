#include <stdio.h>

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int x, y, r;

	if (argc != 3)
	{
		printf ("error\n");
		return (1);
	}
	
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	r = x * y;
	printf ("%d\n", r);
	return (0);
}
