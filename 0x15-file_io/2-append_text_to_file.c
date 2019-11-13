#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: input name of the file in string (pointer)
 * @text_content: content to append
 * Return: 1 if success, otherwise -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, sys_write;
	char *tmp = NULL;

	file_descriptor = sys_write = 0;

	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	tmp = text_content;
	while (*tmp++ != '\0')
		;

	sys_write = write(file_descriptor, text_content, (tmp - text_content) - 1);
	/*if (!sys_write)*/
	if (sys_write != -1)
		return (1);

	return (-1);
}
