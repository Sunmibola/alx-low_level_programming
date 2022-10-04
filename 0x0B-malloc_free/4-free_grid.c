# include <stdlib.h>
# include "main.h"
/**
 * free_grid - frees a 2 -dimensional grid
 * @grid: The 2-dimensional array of integers to be free
 * @height: The height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
