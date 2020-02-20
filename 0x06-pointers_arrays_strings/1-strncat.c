#include "holberton.h"
/**
 * _strncat - Short description, single line
 * @dest: Description of parameter a
(* @src: Description of parameter b
(* @n: Description of parameter b
(* section header: Section description)*
* Return: Description of the returned value
*/
char *_strncat(char *dest, char *src, int n)
{
char *x = dest;
int i = 0, a, j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
j++;
if( n <= j)
for (a = 0 ; a < n ; a++)
dest[a + i] = src[a];
else
for (a = 0 ; a <= j ; a++)
dest[a + i] = src[a];
return (x);
}
