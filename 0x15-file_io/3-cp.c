#include "main.h"
/**
 * checkArgumentCount - checks for the correct number of arguments
 * @argc: number of arguments
 * Return: Void.
 */
void checkArgumentCount(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * checkFileFrom - checks that file from exist and can be read
 * @result: if success or failed.
 * @filename: name of file
 * Return: Void.
 */
void checkFileFrom(int result, const char *filename)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}
/**
 * checkFileTo - checks that file to exist and can be writting to
 * @result: if success or failed
 * @filename: name of file
 * @fileFromDescriptor: file descriptor from
 * Return: Void.
 */
void checkFileTo(int result, const char *filename, int fileFromDescriptor)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		close(fileFromDescriptor);
		exit(99);
	}
}

/**
 * checkClose - checks that file to exist and can be writting
 * @result: if success or failed
 * @fileDescriptor: file descriptor to
 * Return: Void.
 */
void checkClose(int result, int fileDescriptor)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDescriptor);
		exit(100);
	}
}

/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fileFromDescriptor, fileToDescriptor, closeResult;
	ssize_t bytesRead, bytesWritten;
	char buffer[1024];
	mode_t filePermissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	checkArgumentCount(argc);

	fileFromDescriptor = open(argv[1], O_RDONLY);
	checkFileFrom(fileFromDescriptor, argv[1]);

	fileToDescriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				filePermissions);
	checkFileTo(fileToDescriptor, argv[2], fileFromDescriptor);

	bytesRead = 1024;
	while (bytesRead == 1024)
	{
		bytesRead = read(fileFromDescriptor, buffer, 1024);
		checkFileFrom(bytesRead, argv[1]);

		bytesWritten = write(fileToDescriptor, buffer, bytesRead);
		if (bytesWritten != bytesRead)
			bytesWritten = -1;
		checkFileTo(bytesWritten, argv[2], fileFromDescriptor);
	}
	closeResult = close(fileToDescriptor);
	checkClose(closeResult, fileToDescriptor);

	closeResult = close(fileFromDescriptor);
	checkClose(closeResult, fileFromDescriptor);

	return (0);
}
