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
int i, j, x;
for (i = 48 ; i < 58 ; i++)
{
putchar(i);
x = 44;
for (j = 0 ; j <= 1 ; j++)
{
if (i != 57)
{
putchar(x);
x -= 12;
}
}
}
putchar('$');
putchar('\n');
return (0);
}
