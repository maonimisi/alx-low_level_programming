#include "function_pointers.h"
/**
* array_iterator - function that executes a function given as a parameter
* @array: array to execute func
* @size: size of the array
* @action: pointer to the function
* Return: Always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
