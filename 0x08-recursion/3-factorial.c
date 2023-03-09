#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number
 * Return: the factorial result
 */

int factorial(int n)
{
	int trial = n;

	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	trial *= factorial(n - 1);
	return (trial);
}
