#include "holberton.h"
/**
 * _strspn - Short description, single line
 * @s: Description of parameter
 * @accept: Description of parameter
* Return: Description of the returned value
*/
unsigned int _strspn(char *s, char *accept)
{
char *x = accept;
unsigned int i = 0;
for (; *s != '\0' ; s++)
{
for (accept = x; *accept != '\0' ; accept++)
if (*s == *accept)
{
i++;
break;
}
if (accept[0] == '\0')
return (i);
}
return (i);
}
