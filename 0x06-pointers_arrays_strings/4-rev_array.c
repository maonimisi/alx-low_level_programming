#include "main.h"
/**
* reverse_array - reverse an array.
* @a: array.
* @n: array's length.
*/
void reverse_array(int *a, int n)
{
	int i = 0, rev;

	n = n - 1;
	while (i < n)
	{
		rev = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = rev;
		i++;
		n--;
	}
}
