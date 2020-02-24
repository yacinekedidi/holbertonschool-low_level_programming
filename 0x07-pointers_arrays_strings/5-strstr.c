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
for ( ; *needle != '\0' ; needle++)
{
for (haystack = x ; *haystack != '\0' ; haystack++)
if (*haystack == *needle)
return (haystack);

}

return (0);
}
