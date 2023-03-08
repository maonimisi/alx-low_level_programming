#include "main.h"
/**
* _puts_recursion - this function prints a string
* @s: string to print
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* prints letters and continue to iterate over the pointer string */
	_putchar(*s);
	_puts_recursion(s + 1);
}
