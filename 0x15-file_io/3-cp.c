#include "main.h"
/**
 * main - copies the content from one file to another
 * @argv: number of argument passed
 * @argv: argument vector
 * Return: Return 1 on success , exit 97, 98, 99, 100 on error
 */
int main (int argc, char **argv)
{
	int fopen1, fopen2, fReadCounter, fWriteCounter, output1, output2;
	char buffer[BUFSIZ];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fopen1 = open(argv[1], O_RDONLY);
	if (fopen1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file argv[1]\n"), exit(98);
	fopen2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fopen2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to argv[2]\n"), exit(99);
	while ((fReadCounter = read(fopen1, buffer, BUFSIZ)) > 0)
	{
		fWriteCounter = write(fopen2, buffer, fReadCounter);
		if (fWriteCounter != fReadCounter)
			dprintf(STDERR_FILENO, "Error: Can't write to argv[2]\n"), exit(99);
	}
	if (fReadCounter == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	output1 = close(fopen1);
	if (output1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close output1 %d\n", fopen1), exit(100);
	output2 = close(fopen2);
	if (output2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close output1 %d\n", fopen2), exit (100);
	return (0);
}
