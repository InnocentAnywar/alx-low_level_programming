#include "main.h"

/**
 * leet - main entry
 * @str: string to be encoded
 * Return: return value
 */

char *leet(char *str)
{
	int n = 0, m;
	char f[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[n])
	{
		for (m = 0; m <= 7; m++)
		{
			if (str[n] == f[m] || str[n] - 32 == f[m])
			{
				str[n] = m + '0';
			}
		}
		n++;
	}
	return (str);
}
