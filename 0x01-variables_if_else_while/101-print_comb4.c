#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int l, m, n;

	for (l = 0; l < 8; l++)
	{
		for (m = l + 1; m < 9; m++)
		{
			for (n = m + 1; n < 10; n++)
			{
				putchar('0' + (l % 10));
				putchar('0' + (m % 10));
				putchar('0' + (n % 10));
				if (l == 7 && m == 8 && n == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
