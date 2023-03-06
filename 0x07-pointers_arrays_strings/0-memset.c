#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer
 * @b: the constant byte
 * @n: the bytes to be filled
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;
	unsigned char *me = s, you = b;

	for (m = 0; m < n; m++)
	{
		me[m] = you;
	}
	return (me);
}
