#include "main.h"
/**
* factorial - this function prints the factorial of a numbe
* @n: Number to be print
* Return: Retun factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
