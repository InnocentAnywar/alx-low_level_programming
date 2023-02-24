#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	char n = 'a';
	int m = 0;

	while (m < 10)
	{
		_putchar('\n');
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		n++;
	}
}
