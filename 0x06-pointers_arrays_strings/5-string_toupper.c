#include "main.h"

/**
 * string_toupper - changes lower case to upper
 * @str: string to be changed
 * Return: return value
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
