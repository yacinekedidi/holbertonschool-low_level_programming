#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - description
 *@str: description
 *Return: description
 */
char *_strdup(char *str)
{
int i = 0, j = 0, l = 0;
char *s;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
l++;
i++;
}
s = malloc(sizeof(char) * (l + 1));
if (s == NULL)
return (NULL);
while (j < l + 1)
{
s[j] = str[j];
j++;
}
s[j] = '\0';
return (s);
}
