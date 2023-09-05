#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free two dimensional grid
 * @grid: grid to be freed
 * @height: rows to be freed
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
	{
		return;
	}

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
