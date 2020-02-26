#include "holberton.h"
/**
 * _puts_recursion - Short description, single line
 * @s: Description of parameter
* Return: Description of the returned value
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s++);
_puts_recursion(s);
if (*s == '\0')
_putchar('\n');
}
}
