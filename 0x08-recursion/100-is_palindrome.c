#include "main.h"
/**
* str_len - this function prints the length of a string
* @s: the string to print length
* Return: Return the lenth of s
*/
int str_len(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		return (1 + str_len(s + 1));
	return (0);
}
/**
* check_pal -  this function checks if word is palindrome
* @s: string to check
* @i: lefth index
* @j: right index
* Return: Return 1 if string is palindrome or 0 if otherwise
*/
int check_pal(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2) /* take care of the void character */
			return (1);
		else
			return (check_pal(s, i + 1, j - 1));
	else
		return (0);
}
/**
* is_palindrome - this function check if word is palindrome
* @s: string to check
* Return: Return 1 if string is palindrom and 0 if otherwise
*/

int is_palindrome(char *s)
{
	return (check_pal(s, 0, str_len(s) - 1));
}
