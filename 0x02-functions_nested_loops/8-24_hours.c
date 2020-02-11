#include "holberton.h"
/**
 * jack_bauer - Short description, single line
 * @void: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void jack_bauer(void)
{
int i = 48, j = 48, k = 48, l = 48;
while (i < 51)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar('\n');
l++;
if (l == 58)
{
k++;
l = 48;
if (k == 54)
{
k = 48;
if (i == 50 && j == 51)
{
break;
}
j++;
if (j == 58)
{
i++;
j = 48;
}
}
}
}
}
