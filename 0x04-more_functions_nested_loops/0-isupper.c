#include "main.h"

/**
 * _isupper - Entry point
 * @c: Character to be checked.
 * Return: 1 if upper, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
