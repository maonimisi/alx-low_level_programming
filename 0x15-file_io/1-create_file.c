include "main.h"
/**
 * create_file - this function creates a file
 * @text_content: is a NULL terminated string to write to the file
 * @filename: name of the file to create
 * Return: Return 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fopen, fwrite, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwrite = write(fopen, text_content, i);

	if (fopen == -1 || fwrite == -1)
		return (-1);
	close(fopen);
	return (1);
}
