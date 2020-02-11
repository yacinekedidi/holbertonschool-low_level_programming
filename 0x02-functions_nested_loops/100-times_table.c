#include "holberton.h"
/**
 * print_times_table - Short description, single line
 * @n: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_times_table(int n)
{
int i, j;
for (i = 0 ; i <= n ; ++i)
{
for (j = 0 ; j <= n ; ++j)
{
if (i * j <= 9)
{
_putchar(i * j + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
if (i * (j + 1) < 10)
{
if (j != n)
_putchar(' ');
}
}
else if (i < 99)
{
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
}
 if(i * (j + 1) < 100
   {
     if(j != n)
       _putchar(' ');

   }   
}
else
{
_putchar(i * j / 100);
_putchar((i * j / 10) % 10);
_putchar(i * j % 10);
if (j != n)
{
_putchar(',');
_putchar(' ');
}

 }
 }
_putchar('\n');
}
 }

