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
		if (n == 10)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
