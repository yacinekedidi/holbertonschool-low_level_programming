#include "holberton.h"
/**
 * _strstr - Short description, single line
 * @haystack: Description of parameter
 * @needle: Description of parameter
* Return: Description of the returned value
*/
char *_strstr(char *haystack, char *needle)
{
char *y;
char *x = needle;
for ( ; *haystack != '\0' ; haystack++)
{
for (y = haystack ; *needle != '\0' ; needle++)
if (*y == *needle)
y++;
else
{
haystack = y;
needle = x;
break;
}
if (*needle == '\0')
return (haystack);
}
return (0);
}
