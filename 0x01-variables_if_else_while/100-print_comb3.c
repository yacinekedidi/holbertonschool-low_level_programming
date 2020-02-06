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
int i, j, x = 4;
for (i = 48 ; i <= 57 ; i++)
{

for(j = 45 + x ; j <= 57 ; j++)
{
putchar(i);
putchar(j);
if(i+j != 114)
{
putchar(',');
putchar(' ');
}
}
x += 1;
}
putchar('\n');
return (0);
}
