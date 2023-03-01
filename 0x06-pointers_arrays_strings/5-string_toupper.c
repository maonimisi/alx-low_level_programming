#include "main.h"
/**
* string_toupper - changes case from lower to upper
* @alp: string to change
* Return: modified string
*/
char *string_toupper(char *alp)
{
	int i = 0;

	while (alp[i] != '\0')
	{
		if (alp[i] > 96 && alp[i] < 123)
		{
			alp[i] -= 32;
		}
		i++;
	}
	return (alp);
}
