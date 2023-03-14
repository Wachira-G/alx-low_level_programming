#include <stdlib.h>
#include "main.h"

/**
 * free_grid - definition
 * Description: frees a 2 dimensional grid previously created
 *  by your alloc_grid function.
 * @grid: pointer to 2-dimensional grid created previously
 * @height: no of rows in the 2-d array
 * Return: nothing
 * Note that we will compile with your alloc_grid.c file.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
