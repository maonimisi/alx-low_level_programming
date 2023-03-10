#include <stdio.h>
#include <stdlib.h>
/**
* main - this function multiplies two numbers
* @argc: arguments count, passed to the function
* @argv: argument vector, pointers to strings
* Return: Return multiplication or error/return (1) if no argument
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
		return (0);
	}
}
