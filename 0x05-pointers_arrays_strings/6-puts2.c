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
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\0');
_putchar('\n');
}
