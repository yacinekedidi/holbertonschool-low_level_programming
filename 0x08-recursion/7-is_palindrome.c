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
/**
 * _func - Short description, single line
 * @x: Description of parameter
 * @s: Description of parameter
 * @l: Description of parameter
* Return: Description of the returned value
*/
int func(char *x, char *s, int l)
{
if (l > 0)
{
if (*s == x[l])
return (func(x, ++s, --l));
else
return (0);
}
return (1);
}
/**
 * is_palindrome - Short description, single line
 * @s: Description of parameter
* Return: Description of the returned value
*/
int is_palindrome(char *s)
{
char *x = s;
int len = _strlen_recursion(s);
return (func(x, s, len - 1));
}


