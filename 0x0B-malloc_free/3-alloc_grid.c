#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - this function returns a pointer to a 2da
* @width: width of array
* @height: height of array
* Return: a pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
