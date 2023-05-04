#include "main.h"
/**
* set_bit - function that sets the value of a bit to 1 at a given index
* @n: given number to manipulate at the index
* @index: index of the bit to set, starting at 0
* Returns: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
{
		return (-1);
}
	*n = *n | 1 << index;
	return (1);
}
