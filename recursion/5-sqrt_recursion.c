#include <stdio.h>



int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		int square = mid * mid;
		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (_sqrt_recursion_helper(n, mid + 1, end));
		}
		else
		{
			return (_sqrt_recursion_helper(n, start, mid - 1));
		}
	}
	return (-1);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_helper(n, 0, n));
}
