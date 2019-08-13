#include "holberton.h"

/**
 * create_file - Make file, if doesn't make
 * @filename: Char of the name file
 * @text_content: Char that contain the 0
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd_O, fd_W, count;

	fd_O = 0;
	fd_W = 0;
	count = 0;

	if (filename == NULL)
		return (-1);

	fd_O = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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
