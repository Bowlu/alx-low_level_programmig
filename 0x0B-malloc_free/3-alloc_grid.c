#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-dimensional array
 * @width: first parameter
 * @height: second parameter
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int a, b, c, d;

	i = malloc(height * sizeof(int *));
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}


	for (a = 0; a < height; a++)
	{
		i[a] = malloc(width * sizeof(int));
		if (i[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(i[b]);
			}
			free(i);
			return (NULL);
		}
	}
	if (width <= 0 || height <= 0)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			i[c][d] = 0;
	}
	return (i);
}
