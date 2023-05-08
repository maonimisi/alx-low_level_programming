#include "main.h"
/**
 * create_file - this function creates a file
 * @text_content: is a NULL terminated string to write to the file
 * @filename: name of the file to create
 * Return: Return 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}
	else
	{
		i = 0;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd, text_content, i);
	if (bytes_written < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
