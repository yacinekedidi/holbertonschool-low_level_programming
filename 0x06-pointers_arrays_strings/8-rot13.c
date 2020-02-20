#include "holberton.h"
/**
 * rot13 - Short description, single line
 * @s: Description of parameter dest
(* section header: Section description)*
* Return: Description of the returned value
*/
char *rot13(char *s)
{
char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char x1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (x[j] != '\0')
{
if (s[i] == x[j])
{
s[i] = x1[j];
break;
}
j++;
}
}
return (s);
}
