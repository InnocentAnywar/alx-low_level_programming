#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned i
 * @b: the binary string
 * Return: the converted number or 0 for errors
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	while (b[i] == '0' || b[i] == '1')
	{
		result << 1;
		result += b - '0';
		i++;
	}
	return (result);
}
