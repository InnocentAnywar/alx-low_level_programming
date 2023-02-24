#include "main.h"

/**
 * more_numbers - Entry point
 */

void more_numbers(void)
{
	int n, m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{	
			if (n > 9)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
