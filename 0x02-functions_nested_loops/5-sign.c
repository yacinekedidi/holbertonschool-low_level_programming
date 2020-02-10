#include "holberton.h"
/**
 * print_sign - Short description, single line
 * @n: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int print_sign(int n)
{
int x = 0;
if (n > 0)
{
_putchar('+');
x = 1;
}
else if (n == 0)
_putchar(0 + '0');
else
{
_putchar('-');
x = -1;
}
return (x);
}
