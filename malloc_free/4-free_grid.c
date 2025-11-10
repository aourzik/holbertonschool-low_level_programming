#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère une grille 2D allouée par alloc_grid
 * @grid: le tableau 2D à libérer
 * @height: le nombre de lignes du tableau
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
