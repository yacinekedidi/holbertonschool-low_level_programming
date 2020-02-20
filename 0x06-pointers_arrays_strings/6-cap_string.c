#include "holberton.h"
/**
 * cap_string - Short description, single line
 * @s: Description of parameter dest
(* section header: Section description)*
* Return: Description of the returned value
*/
char *cap_string(char *s)
{
int i = 1, j;
char tab[509] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')',
'{', '}', '"'};
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
while (s[i] != '\0')
{
j = 0;
while (s[i] != tab[j] && j < 13)
j++;
if (j <= 12 && s[i] == tab[j])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;
}
i++;
}
return (s);
}
