#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - check the code .
 * @n: number
 * Return: Always .
 */

void print_binary(unsigned long int n)
{
unsigned long int tmp = n;
int i = 0;

while ((tmp >>= 1)  != 0)
i++;

while (i >= 0)
{
if ((n >> i) &1)
_putchar('1');
else
_putchar('0');
i--;
}

}
