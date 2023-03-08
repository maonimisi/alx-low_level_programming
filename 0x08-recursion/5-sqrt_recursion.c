/**
* check_sqrt - this function checks for the square root
* @i: int. to be square
* @j: square of the int i
* Return: Return an integer
*/
int check_sqrt(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check_sqrt(i + 1, j));
}

/**
* _sqrt_recursion - this function returns the natural square root of n
* @n: integer to find sqrt
* Return: Return natural square root or -1 (as the case maybe)
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
