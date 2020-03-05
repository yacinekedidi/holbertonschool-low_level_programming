#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1 : Description
 * @s2 : Description
 * @n : Description
 * Return: Always .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (j < n)
n = j;
x = malloc(sizeof(char) * i + n + 1);
if ( x == NULL)
return (NULL);
i = 0;
while (s1[i])
{
x[i] = s1[i];
i++;
}
j = 0;
while (j < n)
{
x[i + j] = s2[j];
j++;
}
x[i + j] = '\0';
return (x);
}
