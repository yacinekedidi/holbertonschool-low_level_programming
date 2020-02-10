#include "holberton.h"
#include<stdio.h>
/**
 * print_to_98 - Short description, single line
 * @n: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n ; i >= 98 ; --i)
{
printf("%i", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
if (n == 98)
{
printf("%i", n);
printf("\n");
}
if (n < 98)
{
for (i = n ; i <= 98 ; ++i)
{
printf("%i", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
}

