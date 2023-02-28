#include "main.h"

/**
 * _strcpy - Entry point
 * @src: pointer
 * @dest: pointer
 * Return: return value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
