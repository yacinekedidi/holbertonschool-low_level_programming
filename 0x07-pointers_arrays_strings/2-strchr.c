#include "holberton.h"
/**
 * _strchr - Short description, single line
 * @s: Description of parameter
 * @c: Description of parameter
* Return: Description of the returned value
*/
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return ((char *)s);
} while (*s++);
return (0);
}
