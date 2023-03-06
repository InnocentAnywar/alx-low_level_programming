#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int n, m;

	for (n = 0; a[n][7]; n++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[n][m]);
		}
		_putchar('\n');
	}
}
