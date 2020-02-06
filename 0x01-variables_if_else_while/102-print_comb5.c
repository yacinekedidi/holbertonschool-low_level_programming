#include<stdio.h>
/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
int i, x, y, j;
for (i = 48 ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
for (x = 48 ; x < 58 ; x++)
{
for (y = 48 ; y < 58 ; y++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(x);
putchar(y);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
