#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated memory space
* @str: the source string
* Return: returns a pointer to the duplicate memory
*/
char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';
	return (copy);
}
