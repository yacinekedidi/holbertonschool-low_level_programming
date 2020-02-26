#include "holberton.h"
/**
 * factorial - Short description, single line
 * @n: Description of parameter
* Return: Description of the returned value
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
