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
/**
 * _strdup - Short description, single line
 * @str: Description of parameter
* Return: Description of the returned value
*/
char *_strdup(char *str)
{
size_t l = _strlen(str) + 1;
char *x;
if (str == NULL)
return (NULL);
x =  malloc(l * sizeof(char));
if (x == NULL)
return (NULL);
return (_strcpy(x, str));
}
