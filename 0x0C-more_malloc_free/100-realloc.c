#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @old_size: the size of the memory to print
 * @new_size: the size of the memory to print
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
return (ptr);
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
