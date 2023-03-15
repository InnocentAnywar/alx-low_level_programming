#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array of i
 * @width: the width of the array
 * @height: the height of the array
 * Return: the return values
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		twoD[h] = malloc(sizeof(int) * width);
		if (twoD[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(twoD[h]);
			}
			free(twoD);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			twoD[h][w] = 0;
		}
	}
	return (twoD);
}
