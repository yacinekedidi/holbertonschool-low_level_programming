#include "holberton.h"
/**
* print_diagonal - Short description, single line
* @n: Description of parameter
* Description: Longer description of the function)?
* Return: Description of the returned value
*/
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
_putchar(' ');
_putchar('\\');
}
_putchar('\n');
}
