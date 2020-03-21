#include "holberton.h"


/**
 * twodigit - Short description, single line
 * @i: Description of parameter x
 * @j: Description of parameter x
 * @n: Description of parameter x
* Return: Description of the returned value
*/
void twodigit(int i, int j, int n)
{
	_putchar(i * j / 10 + '0');
	_putchar(i * j % 10 + '0');
	if (j != n)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (i * (j + 1) < 100)
	{
	if (j != n)
	_putchar(' ');
	}
}


/**
 * threedigit - Short description, single line
 * @i: Description of parameter x
 * @j: Description of parameter x
 * @n: Description of parameter x
* Return: Description of the returned value
*/
void threedigit(int i, int j, int n)
{
	_putchar(i * j / 100 + '0');
	_putchar(i * j % 100 / 10 + '0');
	_putchar(i * j % 100 % 10 + '0');
	if (j != n)
	{
	_putchar(',');
	_putchar(' ');
	}
}

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

	if (n > 15 || n < 0)
		return;
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
	else if (i * j < 100)
	{
		twodigit(i, j, n);
	}
	else
	{
		threedigit(i, j, n);
	}
	}
	_putchar('\n');
	}
}
