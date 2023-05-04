#include "main.h"
/**
 * flip_bits - this function returns the number of bit to flip
 * @n: original number to slip
 * @m: target number to get to
 * Return: returns the number of bits to slip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = n ^ m;
	unsigned int count = 0;

	while (l != 0)
	{
		count += l & 1;
		l >>= 1;
	}
	return (count);
}
