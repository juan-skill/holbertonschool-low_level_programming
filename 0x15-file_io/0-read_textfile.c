#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: input name of the file in string (pointer)
 * @letters: input number (bytes) to print
 * Return: the number actual bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t sys_read, sys_write;
	char *buffer = NULL;

	file_descriptor = sys_read = sys_write = 0;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	/*if (!buffer)*/
	if (buffer == NULL)
		return (0);

	sys_read = read(file_descriptor, buffer, letters);
	if (sys_read == -1)
		return (0);
	buffer[sys_read] = '\0';

	sys_write = write(STDOUT_FILENO, buffer, sys_read);
	if (sys_write == -1)
		return (0);

	if (sys_write == -1 || sys_read != sys_write)
		return (0);

	free(buffer);
	close(file_descriptor);

	return (sys_read);
}
