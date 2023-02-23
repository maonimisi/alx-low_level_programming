#include "main.h"
/**
* print_most_numbers - print number 0 - 9 excluding 2 and 4
* Return: always 0 (succes)
*/
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		{
		if (!(num == '2' || num == '4'))
			_putchar(num);
		}
	_putchar('\n');
}
