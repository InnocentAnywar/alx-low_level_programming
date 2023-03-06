#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer
 * @src: another pointer
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;
	char *a = dest, *b = src;

	for (m = 0; m < n; m++)
	{
		a[m] = b[m];
	}
	return (a);
}
