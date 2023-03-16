#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array of @nmemb elements
* @size bytes each and returns a pointer to the allocated memory
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		c[i] = '\0';
	return (c);
}
