#include "holberton.h"

/**
 * create_file - Make file, if doesn't make
 * @filename: Char of the name file
 * @text_content: Char that contain the 0
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd_O, fd_R, fd_W, count;

	if (filename == NULL)
		return (-1);

	fd_O = open(filename, O_CREAT | O_APPEND, 0600);

	if (fd_O == -1)
		return (0);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	fd_R = read(fd_O, text_content, count);

	if (fd_R == -1)
		return (0);

	fd_W = write(STDOUT_FILENO, text_content, count);

	if (fd_W == -1)
		return (0);

	return (1);
}
