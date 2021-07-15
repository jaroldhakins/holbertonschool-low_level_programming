#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d integer grid previously created by alloc_grid
 *
 * @grid: puntero
 * @height: numero de filas
 *
 * Return: no retorna
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
