#include "main.h"
#include <stdlib.h>
/**
* free_grid - this function free a 2 dimensional grid previously created
* @grid: 2 dimensional array to free
* @height: height
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
