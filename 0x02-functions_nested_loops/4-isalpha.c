#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: the character checked
* Return: return 1 if c is a letter, lower or c and 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
