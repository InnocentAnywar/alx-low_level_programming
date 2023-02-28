#include "main.h"

/**
 * _atoi - Entry point
 * @s: string to be converted
 * Return: return value
 */

int _atoi(char *s)
{
	int m = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
		{
			m *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);
	return (n * m);
}
