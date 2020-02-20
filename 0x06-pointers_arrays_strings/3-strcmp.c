#include "holberton.h"
/**
 * _strcmp - Short description, single line
 * @s1: Description of parameter s1
(* @s2: Description of parameter s2
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, n = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
n = s1[i] - s2[i];
if (n != 0)
break;
i++;
}
return (n);
}
