#include "holberton.h"
/**
 * leet - Short description, single line
 * @s: Description of parameter dest
(* section header: Section description)*
* Return: Description of the returned value
*/
char *leet(char *s)
{
int i = 0, j;
char tab[] = {'a', 'e', 'o', 't', 'l'};
char numbers[] = {'4', '3', '0', '7', '1'};
s[0] = '3';
while (s[i] != '\0')
{
j = 0;
while (s[i] != tab[j] && j < 5)
j++;
if ((s[i] == tab[j] || s[i] == tab[j] - 32) && j <= 4)
s[i] = numbers[j];
i++;
}
return (s);
}
