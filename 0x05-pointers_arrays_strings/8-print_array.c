#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Short description, single line
 * @a: Description of parameter x
(* @n: Desription
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%i", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
