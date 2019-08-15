#ifndef FD_IO
#define FD_IO

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void copy_text_to_file(char *file_from, char *file_to);

void error_open_read(int file_descriptor);
void error_make_write(int file_descriptor);
void print_error_close(int file_descriptor);


#endif
