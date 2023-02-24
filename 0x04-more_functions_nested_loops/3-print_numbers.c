#include "main.h"

/**
 * print_numbers - Entry point
 * Thats all
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
