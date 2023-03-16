#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *size;
	unsigned int i, diff;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	size  =  malloc(sizeof(int) * diff);
	if (size == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		size[i] = min++;
	return (size);
}
