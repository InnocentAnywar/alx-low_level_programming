#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
		putchar(',');
		putchar(' ');
		if (n == 9)
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
