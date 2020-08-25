#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array
 *	of integers using the Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: the value to search for in the array
 * Return: if the value was found returns its index else returns -1
 */

int linear_search(int *array, size_t size, int value)
{
int i;

if (!array)
	return (-1);

for (i = 0 ; i < (int) size ; i++)
{
	if (array[i] != value)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
}

return (-1);
}
