#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*
*/
void print_alphabet_x10(void)
{
	int index;
	char letter;

	index = 0;
	while (index < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		index++;
	}
}
