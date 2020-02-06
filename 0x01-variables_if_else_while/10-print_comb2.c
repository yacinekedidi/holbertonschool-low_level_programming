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
int i, j;
for (i = 48 ; i <= 57 ; i++)
{
for(j = 48 ; j <= 57 ; j++)
{
putchar(i);
putchar(j);
if(i+j != 114)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
