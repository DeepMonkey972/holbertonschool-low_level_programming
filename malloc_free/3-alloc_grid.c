#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;
	int k = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			while (k < i)
			{
				free(grid[k]);
				k++;
				grid[k] = NULL;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
