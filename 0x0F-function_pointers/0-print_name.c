#include "function_pointers.h"
/**
* print_name -  this function print name of pointer
* @name: a variable pointing to a character array
* @f: a fucntion pointer that takes a character array
* Return: Always 0.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
