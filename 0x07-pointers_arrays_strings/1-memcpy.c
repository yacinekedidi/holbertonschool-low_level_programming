#include "holberton.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: fvfv
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *x = dest;
while (n-- > 0)
*dest++ = *src++;
return (x);
}
