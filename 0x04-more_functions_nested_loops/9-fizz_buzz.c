#include <stdio.h>
/**
* main - Short description, single line
* @void: Description of parameter
* Return: Description of the returned value
*/
int main(void)
{
int i;
for (i = 1 ; i <= 100 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
}
else
printf("%i", i);
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
