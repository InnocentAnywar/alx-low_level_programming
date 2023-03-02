#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: A pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, m = 0;

	while (dest[n++])
	{
		m++;
	}
	for (n = 0; src[n]; n++)
	{
		dest[m++] = src[i];
	}
	return (dest);
}
