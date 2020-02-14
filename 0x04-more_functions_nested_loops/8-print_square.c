#include "holberton.h"
/**
* print_square - Short description, single line
* @size: Description of parameter
* Description: Longer description of the function)?
* Return: Description of the returned value
*/
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
