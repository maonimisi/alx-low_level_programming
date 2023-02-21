#include "main.h"
/**
* _islower - this function checks for lowercase character
*@c: the character checked
* Return: Return 1 if character is lower case, ortherwise if anything else
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
