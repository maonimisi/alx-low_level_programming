#include "main.h"
/**
* _strcmp - compare two strings.
* @s1: string one
* @s2: string two
* Return: integer number
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, com = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && com == 0)
	{
		com = s1[i] - s2[i];
		i++;
	}
	return (com);
}
