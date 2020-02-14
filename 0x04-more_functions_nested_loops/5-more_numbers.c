#include "holberton.h"
/**
* more_numbers - Short description, single line
* @void: Description of parameter
* Description: Longer description of the function)?
* Return: Description of the returned value
*/
void more_numbers(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 15 ; j++)
{
if (j > 9)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
} 
_putchar('\n');
}

}
