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
long int numbers[50];
int i;
numbers[0] = 0;
numbers[1] = 1;
for (i = 2 ; i < 50 ; ++i)
numbers[i] = numbers[i - 2] + numbers[i - 1];
for (i = 2 ; i < 49 ; ++i)
printf("%li, ", numbers[i]);
printf("%li\n", numbers[49]);
return (0);
}
