#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (x == NULL)
return (NULL);
while (i < nmemb * size)
{
x[i] = 0;
i++;
}
return (x);
}
