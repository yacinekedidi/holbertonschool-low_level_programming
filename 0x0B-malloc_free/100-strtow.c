#include "holberton.h"
#include <stdlib.h>
/**
 * words - description
 *@str: description
 *Return: description
 */
int words(char *str)
{
int i = 0, l = 0;
while (str[i] != '\0')
{
if (str[i] == ' ')
i++;
else
{
l++;
while (str[i] != ' ')
i++;
}
}
return (l);
}
/**
 * display - description
 *@str: description
 *@s: description
 *@i: description
 *Return: description
 */
int display(char *str, char *s, int i)
{
int z = 0;
while (str[i] != ' ')
{
s[z] = str[i];
i++;
z++;
}
s[z] = '\0';
return (i);
}
/**
 * letters - description
 *@x: description
 *@l: description
 *Return: description
 */
int letters(char *x, int l)
{
int a = 0;
while (x[l] != ' ')
{
a++;
l++;
}
return (a);
}
/**
 * strtow - description
 *@str: description
 *Return: description
 */
char **strtow(char *str)
{
int a = 0, l, i = 0, j, y;
char **s = NULL;
if (str == NULL || *str == '\0')
return (NULL);
l = words(str);
if (l == 0)
return (NULL);
s = malloc(sizeof(char *) * l + 1);
if (s == NULL)
return (NULL);
while (str[i] != '\0')
{
if (str[i] == ' ')
i++;
else
{
y = letters(str, i);
s[a] = malloc(sizeof(char) * y + 1);
if (s[a] == NULL)
{
for (j = 0 ; j <= a ; j++)
free(s[j]);
free(s);
return (NULL);
}
i = display(str, s[a], i);
a++;
}
}
s[a] = NULL;
return (s);
}
