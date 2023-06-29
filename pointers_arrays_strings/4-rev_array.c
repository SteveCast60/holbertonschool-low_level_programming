#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start;
	start = 0;

	if (start >= n)
		return;

	temp = a[start];
	a[start] = a[n];
	a[n] = temp;
}
