#include "main.h"

/**
 * clear_bit - sets value of bit at index to 0
 * @n: the number
 * @index: the index
 * Return: 1 if works and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
