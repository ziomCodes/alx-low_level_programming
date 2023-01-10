#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **newGrid;
	int num, num1;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	newGrid = malloc(height * sizeof(*newGrid));
	if (newGrid == NULL)
		return (NULL);

	for (num = 0; num < height; num++)
	{
		newGrid[num] = malloc(width * sizeof(**newGrid));
		if (newGrid[num] == NULL)
		{
			for (num--; num >= 0; num--)
				free(newGrid[num]);
			free(newGrid);
			return (NULL);
		}
		for (num1 = 0; num1 < width; num1++)
			newGrid[num][num1] = 0;
	}

	return (newGrid);
}
