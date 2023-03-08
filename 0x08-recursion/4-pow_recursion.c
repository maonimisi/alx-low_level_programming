#include <stdio.h>
/**
* _pow_recursion - this function print x raised to the power of y
* @x: number
* @y: raised to the power
* Return: Return x raise to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
