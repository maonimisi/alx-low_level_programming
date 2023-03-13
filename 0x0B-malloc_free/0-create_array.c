#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - this function creates an array of characters
* @size: size of memory
* @c: character to prints
* Return: return char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}
	j = malloc(sizeof(char) * size);

	if (j == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		j[i] = c;
	return (j);
}
