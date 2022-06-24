#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by
 * my alloc_grid function
 * @grid : the address of the two dimensional grid
 * @height : height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	/* deallocates the pointer of pointers */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* deallocates all the matrix */
	free(grid);
}
