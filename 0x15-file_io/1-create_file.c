#include "holberton.h"

/**
 * create_file - create a write file
 * @filename: file name
 * @text_content: bytes file to write
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t sys_write;
	char *tmp = NULL;

	file_descriptor = sys_write = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	tmp = text_content;
	while (*tmp++ != '\0')
		;

	sys_write = write(file_descriptor, text_content, (tmp - text_content) - 1);
	if (sys_write == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
