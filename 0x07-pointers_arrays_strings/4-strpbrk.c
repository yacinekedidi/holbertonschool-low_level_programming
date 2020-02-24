#include "holberton.h"
/**
 * _strpbrk - Short description, single line
 * @s: Description of parameter
 * @accept: Description of parameter
* Return: Description of the returned value
*/
char *_strpbrk(char *s, char *accept)
{
char *x = accept;
for ( ; *s != '\0' ; s++)
{
for (accept = x ; *accept != '\0' ; accept++)
if (*s == *accept)
return (s);
}
return (0);
}
