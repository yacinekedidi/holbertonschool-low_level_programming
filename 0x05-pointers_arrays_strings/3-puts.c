#include "holberton.h"
/**
 * _puts - Short description, single line
 * @str: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
