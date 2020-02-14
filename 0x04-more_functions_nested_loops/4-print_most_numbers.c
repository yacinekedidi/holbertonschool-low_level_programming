#include "holberton.h"
/**
* print_most_numbers - Short description, single line
* @void: Description of parameter
* Description: Longer description of the function)?
* Return: Description of the returned value
*/
void print_most_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
if (i != 2 && i != 4)
_putchar(i + '0');
}
_putchar('\n');
}
