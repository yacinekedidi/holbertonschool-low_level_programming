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
char tabM[] = {'A', 'E', 'O', 'T', 'L'};
char numbers[] = {'4', '3', '0', '7', '1'};
while (s[i] != '\0')
{
j = 0;
 while (s[i] != tab[j] && j < 5)
j++;
if (s[i] == tab[j] || s[i] == tabM[j])
s[i] = numbers[j];
i++;
}
/*
i = 0;
while (s[i] != '\0')
{
j = 0;
while (s[i] != tabM[j] && j < 5)
j++;
if (s[i] == tabM[j])
s[i] = numbers[j];
i++;
}*/
return (s);
}
