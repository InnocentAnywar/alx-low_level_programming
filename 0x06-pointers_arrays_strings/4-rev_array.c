#include "main.h"

/**
 * reverse_array - reverses content of an int array
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int m, p;

	for (m = n - 1; m >= n / 2; m--)
	{
		p = a[n - 1 - m];
		a[n - 1 - m] = a[m];
		a[m] = p;
	}
}
