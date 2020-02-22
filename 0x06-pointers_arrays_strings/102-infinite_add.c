#include "holberton.h"
/**
 * infinite_add - Short description, single line
 * @n1: Description of parameter
(* @n2: Description of parameter
 * @r: Description of parameter
 * @size_r: Description of parameter
* Return: Description of the returned value
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
char *ori = r;
int i, j, rest = 0, x, R = 0, V, Z, t = 0;
while (i = 0 ; n1[i] != '\0' ; i++)
for (j = 0 ; n2[j] != '\0'; j++)
if (size_r <= i + 1 || size_r <= j + 1)
return (0);
else
{
i--;
j--;
r[size_r] = '\0';
for (x = size_r - 1 ; x >= 0 ; x--, i--, j--)
{
V = 0;
Z = 0;
if (i >= 0)
V = n1[i] - '0';
if (j >= 0)
Z = n2[j] - '0';
R = V + Z + rest;
if (R > 9)
{
r[x] = R % 10 + '0';
rest = R / 10;
}
else
{
r[x] = R + '0';
rest = 0;
}
}
}
return (ori);
}
