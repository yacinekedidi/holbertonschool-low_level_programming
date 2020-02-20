#include "holberton.h"
#include <string.h>
/**
 * _strncpy - Short description, single line
 * @dest: Description of parameter dest
(* @src: Description of parameter src
(* @n: Description of parameter n
(* section header: Section description)*
* Return: Description of the returned value
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, a;
char *x = dest;
while (src[i] != '\0')
i++;
for (a = 0 ; a < n && src[a] != '\0' ; a++)
dest[a] = src[a];
for ( ; a < n ; a++)
dest[a] = '\0';
return (x);
}
