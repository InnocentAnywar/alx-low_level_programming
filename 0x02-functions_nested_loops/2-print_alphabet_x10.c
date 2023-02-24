#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char m = 'a';

	while (n < 9)
	{
		_putchar('\n');
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		n++;
	}
}
