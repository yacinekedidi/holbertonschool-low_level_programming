#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - check the code.
 * @n: number
 * @index: idx
 * Return: Always.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
int one = 1;

if (sizeof(unsigned long int) * 8 < index)
return (-1);

one <<= index;
*n |= one;

return (1);
}
