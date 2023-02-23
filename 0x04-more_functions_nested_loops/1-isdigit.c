#include "main.h"
/**
* _isdigit - check for digit (0 through 9)
* @c: digit to be checked
* Return: return 1 if digit is c and 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
