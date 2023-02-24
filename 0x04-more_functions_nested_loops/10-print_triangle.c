#include "main.h"
/**
* print_triangle - this function prints the shape of a triangle
* @size: the size of the triangle to be printed
* Return: Always 0.
*/
void print_triangle(int size)
{
	int row, space, symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (symbol = 1; symbol <= row; symbol++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
