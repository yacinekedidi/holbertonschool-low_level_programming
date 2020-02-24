#include "holberton.h"
/**
 * print_chessboard - Short description, single line
 * @a: Description of parameter
* Return: Description of the returned value
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < 8 ; j++)
{
if (a[i][j] != ',')
_putchar(a[i][j]);
else
_putchar(' ');
}
_putchar('\n');
}
}
