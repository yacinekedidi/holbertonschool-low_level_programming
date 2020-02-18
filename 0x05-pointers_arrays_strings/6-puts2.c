#include "holberton.h"
/**
 * puts2 - Short description, single line
 * @str: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void puts2(char *str)
{
int i = 0, j;
while (str[i] != '\0')
i++;
for (j = 0 ; j <= i-1 ; j+=2)
_putchar(str[j]);
_putchar('\n');
}
