#include "main.h"

/**
 * swap_int - swaps integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
