#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - check the code .
 * @n: number
 * @index: idx
 * Return: Always .
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

int one = 1;


if (sizeof(unsigned long int) * 8 < index)
return (-1);


one <<= index;

*n = *n & ~one;
return (1);





}
