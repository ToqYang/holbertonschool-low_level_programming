#include "holberton.h"

/**
 * read_textfile - Print the text file read.
 * @filename: Name of character of name file
 * @letters: Size in bytes of the text
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int file_Descriptor_Open, file_Descriptor_Read, f_Descriptor_Write;

	text = malloc(sizeof(char) * letters);

	if (filename == NULL || text == NULL)
		return (0);

	file_Descriptor_Open = open(filename, O_RDONLY);
	file_Descriptor_Read = read(file_Descriptor_Open, text, letters);

	if ((file_Descriptor_Open || file_Descriptor_Read) == -1)
		return (0);

	text[file_Descriptor_Read] = '\0';

	f_Descriptor_Write = write(STDOUT_FILENO, text, file_Descriptor_Read);

	if (f_Descriptor_Write == -1)
		return (0);

	close(file_Descriptor_Open);
	free(text);

	return (file_Descriptor_Read);
}
