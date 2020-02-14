#include "holberton.h"
/**
* print_number - Short description, single line
* @size: Description of parameter size
* Return: Description of the returned value
*/
void print_number(int n)
{
  int x = n, d = 0, s = 1;
  if (n >= 0 && n < 10 )
    _putchar(n + '0');
  if (n > 0)
    {
      while (n != 0)
	{
	  x /= 10;
	  d++;
	  s *= 10;
	}
      while ( s != 0)
	{
	  _putchar(n / s + '0');
	  s /= 10;

	}
      _putchar(n % 10 + '0');
      _putchar('\n');

    }

}
