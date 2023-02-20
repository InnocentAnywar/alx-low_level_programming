#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;
	char m = 'a';

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	while (m < 'g')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
