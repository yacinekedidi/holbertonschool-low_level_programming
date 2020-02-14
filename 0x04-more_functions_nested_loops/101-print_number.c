#include "holberton.h"
/**
* print_number - Short description, single line
* @n: Description of parameter size
* Return: Description of the returned value
*/
void print_number(int n)
{
int y, x, d = 0, s = 1;
if (n == 0)
_putchar(n + '0');
else
{
if (n < 0)
{
_putchar('-');
n = -n;
}
x = n;
if (n > 0)
{
while (x > 0)
{
x /= 10;
d++;
if (d > 1)
s *= 10;
}
while (d != 1)
{
y = n / s;
_putchar(y + '0');
d--;
n = n % s;
s /= 10;
}
_putchar(n % 10 + '0');
_putchar('\n');
}
}
}
