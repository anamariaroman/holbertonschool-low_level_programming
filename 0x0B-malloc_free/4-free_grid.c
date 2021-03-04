#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
