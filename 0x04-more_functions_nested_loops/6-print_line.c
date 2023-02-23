#include "main.h"
/**
* print_line - this function will print _ from a specified n
* @n: the number of _ to be printed
* Return: Always 0.
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
