#include "variadic_functions.h"
/**
* print_strings - Prints strings, followed by a newline
* @separator: string to be printed between strings
* @n: number of strings passed to the function
* Return: Always 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char* str;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
