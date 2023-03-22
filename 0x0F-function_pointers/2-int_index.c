#include "function_pointers.h"
/**
* int_index - this function searches for an integer
* @array: array to search
* @size: number of elements in the array
* @cmp: pointer to the function to be used
* Return: Return -1 if no element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
					i++;
			}
		}
	}
	return (-1);
}
