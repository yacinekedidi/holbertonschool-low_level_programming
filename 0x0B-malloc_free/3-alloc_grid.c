#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - description
 *@width: description
 *@height: description
 *Return: description
 */
int **alloc_grid(int width, int height)
{
int  i, j;
int **p = NULL;
if (width <= 0 || height <= 0)
return (NULL);
p = malloc(height * sizeof(int *));
if (p == NULL)
return (NULL);
for (i = 0 ; i < height ; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
while (i <= 0)
{
free(p[i]);
i--;
}
return (NULL);
}
for (j = 0 ; j < width ; j++)
p[i][j] = 0;
}
return (p);
}
