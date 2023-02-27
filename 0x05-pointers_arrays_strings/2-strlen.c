#include "main.h"
/**
* _strlen - this function return the lenght of a string
* @s: the string to be checked
* Return: Always 0.
*/
int _strlen(char *s)
{
	int len;
	int i;

	i = 0, len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
