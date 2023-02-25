#include "main.h"

/**
 * print_line - Entry point
 * @n: number of characters to be printed.
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
