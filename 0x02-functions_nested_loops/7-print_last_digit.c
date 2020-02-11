#include "holberton.h"
/**
 * print_last_digit - Short description, single line
 * @a: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int print_last_digit(int a)
{
int x = a % 10;
if (x < 0)
{
_putchar(-x + '0');
return (-x);
}
else
{
_putchar(x + '0');
return (x);
}
}
