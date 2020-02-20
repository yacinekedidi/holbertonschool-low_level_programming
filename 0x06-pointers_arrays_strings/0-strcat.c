#include "holberton.h"
/**
 * _strcat - Short description, single line
 * @dest: Description of parameter dest
(* @src: Description of parameter src
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
char *_strcat(char *dest, char *src)
{
char *x = dest;
int i = 0, j = 0, a = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
j++;
for (a = 0 ; a <= j ; a++)
dest[a + i] = src[a];
return (x);
}
