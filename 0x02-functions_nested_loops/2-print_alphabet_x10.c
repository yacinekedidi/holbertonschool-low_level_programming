#include "holberton.h"
/**
 * print_alphabet_x10 - Short description, single line
 * @void: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_alphabet_x10(void)
{
int i = 0;
char j;
for (i = 0 ; i < 10 ; ++i)
{
for (j = 'a' ; j <= 'z' ; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
