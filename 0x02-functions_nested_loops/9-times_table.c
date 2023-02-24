include "main.h"

/**
 * times_table - Entry point
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			p = n * m;

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + p / 0);
			}
		}
		_putchar('\n');
	}
}
