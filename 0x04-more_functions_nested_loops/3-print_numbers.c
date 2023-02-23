#include "main.h"
/**
* print_numbers - print number from 0 through 9
* Return: retun 0 (success)
*/
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
