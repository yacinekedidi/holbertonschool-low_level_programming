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
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
