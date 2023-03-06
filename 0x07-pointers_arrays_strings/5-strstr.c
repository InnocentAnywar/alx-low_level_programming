#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: return value
 */

char *_strstr(char *haystack, char *needle)
{
	int n;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		n = 0;

		if (haystack[n] == needle[n])
		{
			do {
				if (needle[n + 1] == '\0')
				{
					return (haystack);
				}
				n++;
			} while (haystack[n] == needle[n]);
		}
		haystack++;
	}
	return ('\0');
}
