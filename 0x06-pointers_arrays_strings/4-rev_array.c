#include "holberton.h"
#include <string.h>
/**
 * reverse_array - Short description, single line
 * @a: Description of parameter a
(* @n: Description of parameter n
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void reverse_array(int *a, int n)
{
int i, temp;
void print_array(int*, int);
for (i = 0 ; i < n / 2 ; i++)
{
temp = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = temp;
}
}
