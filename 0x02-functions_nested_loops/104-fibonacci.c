#include <stdio.h>
/**
 * main - Short description, single line
 * @void: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
double fibo, f1 = 1, f2 = 2;
int i;
printf("%.0f, ", f1);
printf("%.0f, ", f2);
for (i = 3 ; i <= 98 ; ++i)
{
fibo = f2 + f1;
printf("%.0f", fibo);
if (i != 98)
printf(", ");
f1 = f2;
f2 = fibo;
}
printf("\n");
return (0);
}
