#include "main.h"

/**
 * print_most_numbers - Entry point
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
			n++;
		}
	}
	_putchar('\n');
}
