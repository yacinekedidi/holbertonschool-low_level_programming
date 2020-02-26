#include "holberton.h"
/**
 * _sqrt_recursion - Short description, single line
 * @n: Description of parameter
* Return: Description of the returned value
*/
int _sqrt_recursion(int n)
{
int func(int, int);
if (n == 0 || n == 1)
return (n);
return (func(n, 2));
}
/**
 * func - Short description, single line
 * @x: Description of parameter
 * @y: Description of parameter
* Return: Description of the returned value
*/
int func(int x, int y)
{
if (x < (y * y))
return (-1);
if (x / y != y)
return (func(x, y + 1));
else
return (y);
}
