#include "holberton.h"
/**
 * _strlen_recursion - Short description, single line
 * @s: Description of parameter
* Return: Description of the returned value
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}
