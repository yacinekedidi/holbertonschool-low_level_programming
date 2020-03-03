#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Short description, single line
 * @size: Description of parameter
 * @c: Description of parameter
* Return: Description of the returned value
*/
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;
s = malloc(sizeof(char) * size);
if (s == NULL || size == 0)
return (NULL);
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
