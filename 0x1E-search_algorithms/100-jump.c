#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: The array of integers
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of the value
 */

int jump_search(int *array, size_t size, int value)
{
int low, high;

if (!array)
	return (-1);

low = 0;
high = sqrt(size);


while (high < (int)size)
{

	if (array[low] < value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[high] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			while (low <= high)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				if (array[low] == value)
					return (low);
				++low;
			}
		}
		low = high;
		high += sqrt(size);

	}

	

}
printf("Value checked array[%d] = [%d]\n", low, array[low]);
printf("Value found between indexes [%d] and [%d]\n", low, high);

return (-1);
}
