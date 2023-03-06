#include "main.h"

/**
 * _strpbrk - searches a string for any bytes
 * @s: a string pointer
 * @accept: another string pointer
 * Return: return values
 */

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
