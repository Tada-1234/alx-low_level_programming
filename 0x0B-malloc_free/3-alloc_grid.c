#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for the grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: double pointer to grid.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	y = (int **)malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		y[i] = (int *)malloc(width * sizeof(int));
	}
	if (y == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			y[i][j] = 0;
		}
	}
	return (y);
}
