#include "main.h"
/**
* check_prime - this function checks if number is prime
* @i: first int. to compare
* @j: second int. to compare
* Return: Return if prime or not
*/
int check_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check_prime(i + 1, j));
}

/**
* is_prime_number - states if number is prime
* @n:integer number to check
* Return: Return 0 if number is not prime and 1 otherwise
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));

}
