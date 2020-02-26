#include "holberton.h"
/**
 * _print_rev_recursion - Short description, single line
 * @s: Description of parameter
* Return: Description of the returned value
*/
void _print_rev_recursion(char *s)
{

if (*s == '\0')
return;
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
