#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints shm of two diagonals m
 * @a: pointer
 * @size: an integer
 */

void print_diagsums(int *a, int size)
{
	int n, m = 0, l = 0;

	for (n = 0; n < size; n++)
	{
		m += a[n];
		a += size;
	}
	a -= size;
	for (n = 0; n < size; n++)
	{
		l += a[n];
		a -= size;
	}
	printf("%d, %d\n", m, l);
}
