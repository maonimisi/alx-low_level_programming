#include <stdio.h>
/**
* main - this function prints all arguments passed to it
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
