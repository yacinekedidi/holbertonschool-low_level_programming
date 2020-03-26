#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code.
 * @b: string
 * Return: Always .
 */

unsigned int binary_to_uint(const char *b)
{
const char *r = b;
unsigned int res = 0;
int i = 0, j = 0, x;

while (r[i])
{
if (r[i] != '0' && r[i] != '1')
return (0);
i++;
}

x = i--;
while (j <= x)
{
res += (b[j] - '0') *  (1 << i);
j++;
i--;
}


return (res);
}
