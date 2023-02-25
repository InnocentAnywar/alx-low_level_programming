#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	int n, m;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (m = size - n; m > 0; m--)
			{
				_putchar(' ');
			}
			for (m = 0; m < n; m++)
			{
				_putchar('#');
			}
			if (n == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
