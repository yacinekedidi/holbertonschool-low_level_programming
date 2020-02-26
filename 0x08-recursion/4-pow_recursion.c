#include "holberton.h"
/**
 * _pow_recursion - Short description, single line
 * @x: Description of parameter
 * @y: Description of parameter
* Return: Description of the returned value
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
