#include "holberton.h"
/**
 * _memset - Short description, single line
 * @s: Description of parameter
 * @b: Description of parameter
 * @n: description
* Return: Description of the returned value
*/
char *_memset(char *s, char b, unsigned int n)
{
char *x = s;
while (n-- > 0)
*s++ = b;
return (x);
}
