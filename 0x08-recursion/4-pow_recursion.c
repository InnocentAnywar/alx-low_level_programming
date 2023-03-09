#include "main.h"

/**
 * _pow_recursion - returns x power y
 * @x: integer to be raised
 * @y: the power
 * Return: the result of the function
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);
	return (result);
}
