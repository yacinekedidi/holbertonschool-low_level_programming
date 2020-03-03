#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - description
 *@str: description
 *Return: description
 */
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
/**
 *_str_concat - description
 *@s1: description
 *@s2: description
 *Return: description
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, lens1, lens2;
char *ss;
lens1 = _strlen(s1);
lens2 = _strlen(s2);
ss = malloc (sizeof(char) * (lens1 + lens2 + 1));
if (ss == NULL)
return (NULL);
while (s1[j] != '\0')
{   
ss[j] = s1[j];
j++;    
}
while (s2[i] != '\0')
{
ss[j] = s2[i];
i++;
j++;
}  
ss[j] = '\0';
return (ss);
}
