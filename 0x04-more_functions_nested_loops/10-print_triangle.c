#include "holberton.h"
/**
* print_triangle - Short description, single line
* @size: Description of parameter size
* Return: Description of the returned value
*/
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
j = 1;
while (j <= size)
{
if (j < size - i)
_putchar(' ');
else
_putchar('#');
j++;
}
_putchar('\n');
}
}
else
_putchar('\n');
}
