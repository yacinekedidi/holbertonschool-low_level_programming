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
unsigned long fibo = 0, f1 = 1, f2 = 2, sum = 2;
while (fibo <= 4000000)
{
fibo = f2 + f1;
if (fibo % 2 == 0)
sum += fibo;

f1 = f2;
f2 = fibo;
}
printf("%lu\n", sum);
return (0);
}
