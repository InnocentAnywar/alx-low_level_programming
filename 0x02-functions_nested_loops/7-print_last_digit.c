include "main.h"

/**
 * print_last_digit - Entry point.
 * @n: Number to be tested.
 * Return: return value
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l *= -1;
	}
	_putchar('0' + l);
	return (l);
}
