#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointers returns an integer
 * Return: Always .
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
			return (i);
	}

	return (-1);
}
