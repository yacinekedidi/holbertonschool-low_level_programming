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
int i;
for (i = 48 ; i < 58 ; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(' ');
}
}
putchar('$');
return (0);
}
