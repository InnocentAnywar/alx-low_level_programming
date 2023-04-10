#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned i
 * @b: the binary string
 * Return: the converted number or 0 for errors
 */

unsigned int binary_to_uint(const char *b)
{
	int l = strlen(b);
	unsigned int decimal = 0;

	for (int i = 0; i < l; i++)
	{
		if (b[i] == '1')
		{
			decimal = decimal * 2 + 1;
		}
		else if (b[i] == '0')
		{
			decimal *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (decimal);
}
