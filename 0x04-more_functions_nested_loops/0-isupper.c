#include "main.h"
/**
* _isupper - print if a character is upper or lower
* @c: the character to be checked
* Return: return 1 if c is upper and 0 if othersiwe
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
