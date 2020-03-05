#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b : Description of parameter
 * Return: Always .
 */
void *malloc_checked(unsigned int b)
{
void *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
