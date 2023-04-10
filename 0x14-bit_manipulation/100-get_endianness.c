#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big and 1 if small
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
