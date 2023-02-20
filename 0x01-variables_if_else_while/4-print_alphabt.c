#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
