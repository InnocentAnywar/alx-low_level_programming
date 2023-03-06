#include "main.h"

/**
 * _strchr - locates chr in a string
 * @s: pointer to string
 * @c: character located
 * Return: a pointer or NULL accordingly
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
	}
	return ('\0');
}
