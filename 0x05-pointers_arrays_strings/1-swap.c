#include "main.h"
/**
* swap_int - this function swaps two digit
* @a: the first integer to be swaps for b
* @b: the second integer to be swaps for a
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
