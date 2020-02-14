#include <stdio.h>
/**
* main - Short description, single line
* @void: Description of parameter 
* Return: Description of the returned value
*/
int main(void)
{
unsigned long x = 612852475143, a, b = 0;
while (x != 1)
{
a = 2;
while (x % a != 0)
a++;
x/=a;
if ( a > b)
b = a;  
}
printf("%lu\n", b);
return (0);
}
