#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: first index where value is located, or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, temp);
			if (temp == value)
				return (i);
		}
	}
	return (-1);
}
