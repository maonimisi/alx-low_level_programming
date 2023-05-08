#include "main.h"
/**
 * main - copies the content from one file to another
 * @argc: number of arguments passed
 * @argv: argument vector
 * Return: Return 0 on success, 97, 98, 99, 100 on error
 */
int main(int argc, char **argv)
{
	int fopen1, fopen2, fReadCounter, fWriteCounter;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fopen1 = open(argv[1], O_RDONLY);
	if (fopen1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fopen2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fopen2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(fopen1);
		return (99);
	}
	while ((fReadCounter = read(fopen1, buffer, BUFSIZ)) > 0)
	{
		fWriteCounter = write(fopen2, buffer, fReadCounter);
		if (fWriteCounter != fReadCounter)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(fopen1);
			close(fopen2);
			return (99);
		}
	}
	if (fReadCounter == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fopen1);
		close(fopen2);
		return (98);
	}
	if (close(fopen1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fopen1);
		close(fopen2);
		return (100);
	}
	if (close(fopen2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fopen2);
		return (100);
	}
	return (0);
}
