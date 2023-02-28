#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
