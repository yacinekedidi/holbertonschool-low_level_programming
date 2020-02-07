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
  int i, j, x = 46, y = 4, nmbriter = 1;
for (i = 48 ; i < 56 ; i++)
{
for (j = 49 ; j < 57 ; j++)
{
x+=y;
while (x < 58)
{
putchar(i);
putchar(j);
putchar(x);
 x++;
if (i + j + x != 168)
{
putchar(',');
putchar(' ');
} 
}
y +=1; x = 46; 
}
 nmbriter++;
 j=nmbriter;
 y = nmbriter + 1;
}
putchar('\n');
return (0);
}
