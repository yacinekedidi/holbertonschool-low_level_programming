#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - Short description, single line
 * @s: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: fvfv
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, size_t n)
{
char *x = dest;
while (n-- > 0)
*dest++ = *src++;
return (x);
}

/**
 * _strdup - Short description, single line
 * @str: Description of parameter
* Return: Description of the returned value
*/
char *_strdup(char *str)
{
size_t l = _strlen(str) + 1;
char *x = malloc(l);
if (x == NULL || str == NULL)
return (NULL);
return (_memcpy(x, str, l));
}
