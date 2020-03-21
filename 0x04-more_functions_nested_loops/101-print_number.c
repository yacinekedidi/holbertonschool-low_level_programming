#include "holberton.h"
/**
* print_number - Short description, single line
* @n: Description of parameter size
* Return: Description of the returned value
*/

void print_number(int n)
{
	int i = 0, j, div = 1, tmp;

	if (n < 0)
	{
		if (n == -2147483648)
			n += 1;
		_putchar('-');
		n = -n;
	}
	tmp = n;
	while (tmp / 10 > 0)
	{
		tmp /= 10;
		i++;
	}

	for (j = 0 ; j < i ; j++)
	div *= 10;

	while (div > 0)
	{
	_putchar(n / div + '0');
	n %= div;
	div /= 10;
	}
}
