#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i, j;

	if (!grid || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
