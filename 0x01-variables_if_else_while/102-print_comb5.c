#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar('0' + n / 10);
			putchar('0' + n % 10);
			putchar(' ');
			putchar('0' + m / 10);
			putchar('0' + m % 10);
			if (n == 98 && m == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
