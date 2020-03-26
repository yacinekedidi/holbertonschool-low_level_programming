#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * get_bit - check the code for Holberton School students.
 * @n: number
 * @index: idx
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int max;

max = sizeof(unsigned long int) * 8;
if (index > max)
return (-1);

return ((n >> index) & 1 ? 1 : 0);
}
