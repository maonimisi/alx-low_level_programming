#include "main.h"
#include <stdio.h>
/**
* print_diagsums - this function prints diagonal prints sums
* @a: a pointer
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + (size * i + i));
		sum_2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum_1);
	printf("%d\n", sum_2);
}
