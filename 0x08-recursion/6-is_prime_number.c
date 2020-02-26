#include "holberton.h"
/**
 * is_prime_number - Short description, single line
 * @n: Description of parameter
* Return: Description of the returned value
*/
int is_prime_number(int n)
{
int div(int, int);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (div(n, n - 1));
}
/**
 * div - Short description, single line
 * @x: Description of parameter
 * @y: Description of parameter
* Return: Description of the returned value
*/
int div(int x, int y)
{
if (y == 2)
return (1);
if (x % y != 0)
return (div(x, y - 1));
else
return (0);
}
