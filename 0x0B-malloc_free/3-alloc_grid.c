#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - description
 *@str: description
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
p[i] = malloc (sizeof(int) * width);
if (p[i] == NULL)
return (NULL);
for (j = 0 ; j < width ; j++)
p[i][j] = 0;
}
return (p);
}
