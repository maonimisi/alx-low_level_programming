#include "main.h"
/**
* leet - Encodes a string into 1337
* @s: String to be encoded
*
* Return: S Address
*/
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}
