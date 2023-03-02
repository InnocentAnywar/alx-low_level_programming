#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: First string
 * @src: Second string
 * @n: number of bytes
 * Return: string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0, p = 0;

	while (src[m++])
	{
		p++;
	}
	for (m = 0; src[m] && m < n; m++)
	{
		dest[m] = src[m];
	}
	for (m = p; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}
