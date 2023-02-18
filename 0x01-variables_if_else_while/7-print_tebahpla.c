#include <stdio.h>
/**
 * main - the main function print lowercase alphabe in reverse order
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
