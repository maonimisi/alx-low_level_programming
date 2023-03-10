#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - this function adds positive numbers
* @argc: arguments count, passed to the function
* @argv: argument vector, pointers to strings
* Return: Return add, or 0 if no number is passed
*/
int main(int argc, char *argv[])
{
	int add = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{

		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
