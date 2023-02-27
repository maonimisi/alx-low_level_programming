#include "main.h"
/**
* puts_half - this function prints half of a given string
* @str: given string
* Return: Always 0.
*/
void puts_half(char *str)
{
	int i = 0, len = 0, j;

	while (str[i] != '\0')
	{
		i++;
		len++;
		if (len + 1 % 2 != '0')
			j = (i - 1) / 2;
		else
			j = i / 2;
	}
	j++;
	for (i = j; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
