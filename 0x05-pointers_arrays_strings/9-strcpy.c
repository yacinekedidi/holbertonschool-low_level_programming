#include "holberton.h"
/**
 * _strcpy - Short description, single line
 * @dest: Description of parameter x
(* @src: Desription
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
char *_strcpy(char *dest, char *src)
{
int i = 0, j;
while (src[i] != '\0')
i++;
for (j = 0 ; j <= i ; j++)
dest[j] = src[j];
return (dest);
}
