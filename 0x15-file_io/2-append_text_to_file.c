#include "holberton.h"

/**
 * append_text_to_file - Append text
 * @filename: Pointer of the char of the name
 * @text_content: Text contain inside
 * Return: Integer of number of append
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_O, fd_W, count;

	fd_O = 0;
	fd_W = 0;
	count = 0;

	if (filename == NULL)
		return (0);

	fd_O = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd_O == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			;

		fd_W = write(fd_O, text_content, count);

		if (fd_W == -1)
			return (-1);
	}

	close(fd_O);

	return (1);
}
