#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int *x, i, size;
if (min > max)
return (NULL);
size = max - min + 1;
x = malloc(sizeof(int) * size);
if (x == NULL)
return (NULL);
for (i = 0 ; i < size ; i++)
{
x[i] = min;
min++;
}
return (x);
}
