#include "main.h"

/**
 * flip_bits - bits to flip to get one no to else
 * @n: first bit
 * @m: second bit
 * Return: number of bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
