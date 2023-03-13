#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenates two strings.
* @s1: first string
* @s2: second string
* Return: a pointer to a newly allocated space
*/
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len_1, len_2, len;

	if (s1 != NULL)
	{
	len_1 = 0;
	while (s1[len_1] != '\0')
		len_1++;
	}
	if (s2 != NULL)
	{
	len_2 = 0;
	while (s2[len_2] != '\0')
		len_2++;
	}
	len = len_1 + len_2;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len_2; j++, i++)
	{	
		result[i] = s2[j];
	}
	result[len] = '\0';
	return (result);
}
