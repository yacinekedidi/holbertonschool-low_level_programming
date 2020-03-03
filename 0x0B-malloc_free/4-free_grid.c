#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - description
 *@grid: description
 *@height: description
 *Return: description
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
free(grid[i]);
free(grid);
}
