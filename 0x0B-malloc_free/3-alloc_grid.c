#include "main.h"

/**
 * **alloc_grid - return pointer to 2 dimensional array
 *
 * @width: int
 *
 * @height: int
 *
 * Return: int
*/

int **alloc_grid(int width, int height)
{
	int **x;
	int b, c;

	x = malloc(sizeof(*x) * height);

	if (width <= 0 || height <= 0 || x == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < height; b++)
		{
			x[b] = malloc(sizeof(**x) * width);
			if (x[b] == 0)
			{
				while (b--)
					free(x[i]);
				free(x);
				return (NULL);
			}

			for (c = 0; c < width; c++)
			{
				x[b][c] = 0;
			}
		}
	}

	return (x);
}
