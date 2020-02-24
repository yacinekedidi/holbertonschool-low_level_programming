#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Short description, single line
 * @a: Description of parameter
 * @size: Description of parameter
* Return: Description of the returned value
*/
void print_diagsums(int *a, int size)
{
int i, j, x = size - 1, d1 = 0, d2 = 0;
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
if (i == j)
d1 += *a;
if (i + j == x)
d2 += *a;
a++;
}
}
printf("%i, %i\n", d1, d2);
}
