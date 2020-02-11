#include "holberton.h"
/**
 * times_table - Short description, single line
 * @void: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void times_table(void)
{
int i, j;
for (i = 0 ; i <= 9 ; ++i)
{
for (j = 0 ; j <= 9 ; ++j)
{
if (i * j <= 9)
{
_putchar(i * j + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
