#include <stdio.h>

/**
 * main - Entrt point
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);
		
		putchar(small);
	}
	return (0);
}