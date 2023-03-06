#include "main.h"
/**
* *_memcpy - function that copies memory area
* @n: function copies
* @dest: bytes from memory area
* @src: bytes to memory area
* Return: Return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)

	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
