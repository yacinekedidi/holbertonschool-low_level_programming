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
for (j = i / 2 ; j <= i ; j++)
_putchar(str[j]);
_putchar('\n');
}
