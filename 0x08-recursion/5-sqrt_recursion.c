#include "main.h"

/**
 * _sqrt_recursion - function to calculate sqrt for natual numbers
 * 
 *
 * @n: number to find sqrt
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1, n);

	int find_sqrt(int n, int start, int end)
	{
		if (start > end)
			return (-1);
		int mid = (start + end) / 2;
		if (mid * mid == n)
			return mid;
		else if (mid * mid > n)
			return find_sqrt(n, start, mid - 1);
		else
		{
			int result = find_sqrt(n, mid + 1, end);
			return (result == -1) ? mid : result;
		}
	}
}
