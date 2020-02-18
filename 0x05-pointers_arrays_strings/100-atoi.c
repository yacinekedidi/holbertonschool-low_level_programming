#include <stdio.h>
#include <math.h>
#include "holberton.h"
/**
 * power - Short description, single line
 * @x: Description of parameter a
* Description: Longer description of the function)?
* Return: Description of the returned value
*/
double power(int x)
{
int i, n = 1;
for (i = 0 ; i < x ; i++)
n *= 10;
return (n);
}
/**
 * _atoi - Short description, single line
 * @s: Description of parameter a
* Description: Longer description of the function)?
* Return: Description of the returned value
*/
int _atoi(char *s)
{
int i = 0, j = 0, divMinus = 1, n = 0, a;
double power(int);
double y;
char Snumber[509];
while (s[i] != '\0')
{
if (s[i] == '-')
divMinus *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
Snumber[j] = s[i];
j++;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}
i++;
}
for (a = 0 ; a < j ; a++)
{
y = power((j - 1) - a);
n += (Snumber[a] - 48) * y;
}
return (n *divMinus);
}
