#include "main.h"

/**
 * print_binary - converts to binary
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
