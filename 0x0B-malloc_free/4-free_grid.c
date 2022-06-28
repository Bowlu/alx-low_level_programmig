#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees earlier created 2-dimensional array
 * @grid: first argument
 * @height: second argument
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
