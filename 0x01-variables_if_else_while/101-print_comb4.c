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
int i, j, x, y = 4;
for (i = 48 ; i < 56 ; i++)
{
for (j = 49 ; j < 57 ; j++)
{
for (x = 46 + y ; x < 58 ; x++)
{
putchar(i);
putchar(j);
putchar(x);
if (i + j + x != 168)
{
putchar(',');
putchar(' ');
}
}
}
 y +=1;
}
putchar('\n');
return (0);
}
