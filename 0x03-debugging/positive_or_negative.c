#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"
/**
 * positive_or_negative - Short description, single line
 * @n: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: 0
*/
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
