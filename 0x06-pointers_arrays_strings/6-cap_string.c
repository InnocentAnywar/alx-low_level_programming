#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string to be capitalized
 * Return: return value
 */

char *cap_string(char *str)
{
	int n = 0;

	while (str[n])
	{
		while (!(str[n] >= 'a' && str[n] <= 'z'))
		{
			n++;
		}
		if (str[n - 1] == ' ' || str[n - 1] == '\t' || str[n - 1] == '\n' || str[n - 1] == ',' || str[n - 1] == ';' || str[n - 1] == '.' || str[n - 1] == '!' || src[n - 1] == '?' || src[n - 1] == '"' || src[n - 1] == '(' || src[n - 1] == ')' || src[n - 1] == '{' || src[n - 1] == '}' || n == 0)
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
