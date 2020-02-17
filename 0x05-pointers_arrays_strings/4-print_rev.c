#include "holberton.h"
/**
 * _isupper - Short description, single line
 * @c: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_rev(char *s)
{

  int i = 0, j;
  while (s[i] != '\0')
    i++;    

for (j = i ; j >= 0 ; j--)
_putchar(s[j]);
_putchar('\n');




}
