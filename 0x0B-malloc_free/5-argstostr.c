#include "holberton.h"
#include <stdlib.h>
/**
 *lengthconcat - description
 *@av: description
 *@ac: description
 *Return: description
 */
int lengthconcat(char **av, int ac)
{
int i, j, l = 0;
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; av[i][j] != '\0' ; j++)
l++;
l++;
}
return (l);
}
/**
 * argstostr - description
 *@av: description
 *@ac: description
 *Return: description
 */
char *argstostr(int ac, char **av)
{
char *s;
int l = lengthconcat(av, ac);
int i = 0, j = 0, a = 0;
if (ac == 0 || av == NULL)
return (NULL);
s = malloc(sizeof(char) * l + 1);
if (s == NULL)
return (NULL);
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
s[a] = av[i][j];
a++;
j++;
}
s[a] = '\n';
a++;
i++;
}
s[a] = '\0';
return (s);
}
