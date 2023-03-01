#include "main.h"

/**
* _strncpy - copy src into dest.
* @dest: first string.
* @src: second string.
* @n: the number of bytes to use from src.
* Return: string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	while (i < n)
	{
		*(dest + 1) = '\0';
		i++;
	}
	return (dest);
}
