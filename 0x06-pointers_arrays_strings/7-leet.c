#include "holberton.h"
/**
 * leet - Short description, single line
 * @s: Description of parameter dest
(* section header: Section description)*
* Return: Description of the returned value
*/
char *leet(char *s)
{
int i, j;
char tab[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l' , 'L'};
char numbers[10] = {'4','4', '3','3' ,'0','0','7', '7','1', '1'};
while (s[i] != '\0')
{
j = 0;
while (s[i] != tab[j] && j < 10)
j+=2;
if (s[i] == tab[j] || s[i] == tab[j + 1])
s[i] = numbers[j];
i++;
}
return (s);
}
