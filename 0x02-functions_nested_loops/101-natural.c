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
int i, sum = 0;
for (i = 1 ; i < 1024 ; ++i)
if (i % 5 == 0 || i % 3 == 0)
sum += i;
printf("%i\n", sum);
return (0);
}
