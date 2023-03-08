#include "main.h"
/**
* _print_rev_recursion - this function print string in reverse
* @s: string to be printed
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
