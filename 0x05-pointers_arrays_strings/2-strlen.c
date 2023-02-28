#include "main.h"

/**
 * _strlen - Entry point
 * @s: string whose length is to be determined
 * Return: Value returned
 */

int _strlen(char *s)
{
	size_t l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}
