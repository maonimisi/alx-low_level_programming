#include "main.h"

/**
 * read_textfile - this function reads a text file and prints it to POSIX
 * @filename: A pointer to the name of the file
 * @letters: The number of letters it should read and print
 * Return: Return 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);
	fread = read(fopen, text, letters);
	fwrite = write(STDOUT_FILENO, text, fread);

	if (fopen == -1 || fread == -1 || fwrite == -1 || fwrite != fread)
	{
		free(text);
		return (0);
	}
	free(text);
	close(fopen);
	return (fwrite);
}
