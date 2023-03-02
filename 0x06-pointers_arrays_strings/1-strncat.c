#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: n bytes from src
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int p = 0, m = 0;

	while (dest[p++])
	{
		m++;
	}
	for (p = 0; src[p] && p < n; p++)
	{
		dest[m++] = src[p];
	}
	return (dest);
}
