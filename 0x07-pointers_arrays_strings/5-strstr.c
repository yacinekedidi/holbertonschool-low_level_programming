#include "holberton.h"
/**
 * _strstr - Short description, single line
 * @haystack: Description of parameter
 * @needle: Description of parameter
* Return: Description of the returned value
*/
char *_strstr(char *haystack, char *needle)
{
char *x = haystack;
int i = 0;
for ( ; *needle != '\0' ; needle++)
{
for (i = 0 ; *haystack != '\0' ; i++)
if (haystack[i] == *needle)
{
x = &haystack[i];
needle = &needle[0];
return (x);
}
}
return (0);
}
