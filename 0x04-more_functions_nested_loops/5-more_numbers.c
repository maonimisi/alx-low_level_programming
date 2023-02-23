#include "main.h"
/**
* more_numbers - this function prints more numbers 0 through 14
* Return: always 0
*/
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
