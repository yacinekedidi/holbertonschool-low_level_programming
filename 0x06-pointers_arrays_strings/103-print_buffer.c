#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - Short description, single line
 * @b: Description of parameter
 * @size: Description of parameter
* Return: Description of the returned value
*/
void print_buffer(char *b, int size)
{
int i, j, rest, sizeMulti;
if (size < 0)
printf("\n");
else
{
for (i = 0 ; i < size ; i += 10)
{
printf("%08x: ", i);
for (j = 0 ; j < 10 ; j++)
{
if (j % 2 == 0)
printf(" ");
if ((i + j) >= size)
printf("  ");
else if (isprint(b[j + i]))
printf("%x", b[j + i]);
else
printf("%02x", b[j + i]);
}
printf(" ");
for (j = 0 ; j < 10 ; j++)
{
if ((i + j) >= size)
break;
if (isprint(b[j + i]))
printf("%c", b[j + i]);
else
printf(".");
}
printf("\n");
}
}
}
