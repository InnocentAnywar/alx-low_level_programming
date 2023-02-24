#include "main.h"

/**
 * _islower - Entry point.
 * @c: The character to be checked.
 * Return: 1 if character is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
