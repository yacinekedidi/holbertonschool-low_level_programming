#include "holberton.h"
/**
 * puts_half - Short description, single line
 * @str: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void puts_half(char *str)
{
int i, j;
while (str[i] != '\0')
i++;
i--;
if ( i % 2 != 0 )
j = (i - 1) / 2;
else
j = i / 2;
while (str[j+1] != '\0')
{
_putchar(str[j+1]);
j++;
}
_putchar('\n');
}
