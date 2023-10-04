#include "main.h"

/**
  * allocate_grid - print grid
  * @h: height
  * @w: width
  *
  * Return: pointer to 2 dim array
  */
int **alloc_grid(int w, int h)
{
	int **grid, i, j;

	if (w == 0 || h == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * h);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		grid[i] = malloc(sizeof(int) * w);
		if (grid[i] == NULL)
		{
			for (;i > 0;i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
			grid[h][w] = 0;
	}
	return (grid);
}
