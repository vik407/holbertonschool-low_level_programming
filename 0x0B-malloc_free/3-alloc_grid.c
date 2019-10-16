#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers.
 *
 * @width: Integer
 * @height: integer
 *
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **thegrid;

	if (width <= 0 || height <= 0)
		return (NULL);

	thegrid = (int **)(malloc(height * sizeof(int *)));

	if (thegrid == NULL)
		return (NULL);

	h = 0;
	while(h < height)
	{
		thegrid[h] = (int *)(malloc(width * sizeof(int)));
		if (thegrid[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(thegrid[w]);
			free(thegrid);
			return (NULL);
		}

		w = 0;
		while(w < width)
		{
			thegrid[h][w] = 0;
			w++;
		}

		h++;
	}

	return (thegrid);
}
