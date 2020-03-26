#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - check the code.
 * @n : number1
 * @m: number2
 * Return: Always.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int one = n ^ m, flip = 0;


while (one > 0)
{
	if (one & 1)
	flip++;

one >>= 1;
}

return (flip);
}
