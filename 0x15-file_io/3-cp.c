#include "holberton.h"

/**
 * main - Entry point to receive arguments
 * @argc: Arguments that count value
 * @argv: Value of several arguments
 * Return: 0 if is success
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	}

	copy_text_to_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_text_to_file - Copy the content of file to other
 * @file_from: File of origin
 * @file_to: File to destiny
 * Return: 0 if is success
 */

void copy_text_to_file(char *file_from, char *file_to)
{
	int fd_R = 1024;
	int fd_O1, fd_O2, fd_W, fd_Cl1, fd_Cl2;
	char buffer[1024];

	fd_O1 = open(file_from, O_RDONLY);
	fd_O2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 0664);

	error_open_read(fd_O1);
	error_make_write(fd_O2);


	while (fd_R == 1024)
	{
		fd_R = read(fd_O1, buffer, 1024);
		error_open_read(fd_R);

		fd_W = write(fd_O2, buffer, fd_R);
		error_make_write(fd_W);
	}

	fd_Cl1 = close(fd_O1);
	print_error_close(fd_Cl1);

	fd_Cl2 = close(fd_O2);
	print_error_close(fd_Cl2);
}


/**
 * error_open_read - Read file descriptor and manage the errors
 * @file_descriptor: Integer with the number of the file descriptor
 */

void error_open_read(int file_descriptor)
{
	if (file_descriptor == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO,
			"Error: Can't read from file NAME_OF_THE_FILE");
	}
}

/**
 * error_make_write - Manage errors with make or write new file
 * @file_descriptor: Integer with the number of the file descriptor
 */

void error_make_write(int file_descriptor)
{
	if (file_descriptor == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO,
			"Error: Can't write to NAME_OF_THE_FILE");
	}
}

/**
 * print_error_close - Manage the error of the file, it doesn't close
 * @file_descriptor: Integer with the number of the file descriptor
 */

void print_error_close(int file_descriptor)
{
	if (file_descriptor == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO,
			"Error: Can't write to NAME_OF_THE_FILE");
	}
}
