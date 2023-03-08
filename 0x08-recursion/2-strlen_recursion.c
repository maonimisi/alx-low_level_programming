#include <stdio.h>
/**
* _strlen_recursion - this function  prints a string
* @s: string to count
* Return: Return length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
