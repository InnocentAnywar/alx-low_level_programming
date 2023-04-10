#include "main.h"

/**
 * set_bit - sets value of bit at index to 1
 * @n: the number
 * @index: the index
 * Return: 1 if works and -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
