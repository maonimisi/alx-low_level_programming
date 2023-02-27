#include "main.h"
/**
* _puts - this function prints a new line to stdout
* @str: the character to be printed
* Return: Always 0.
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
