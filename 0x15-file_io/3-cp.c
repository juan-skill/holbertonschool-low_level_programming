#include "holberton.h"
#define SE STDERR_FILENO

/**
 * main - copies a file
 *
 * @argc: argument cont
 * @argv: arguments
 * Return: 0 if successful,otherwise 97-100
 */
int main(int argc, char *argv[])
{
	int file_f, file_to, sys_read, status;
	char buf[1024];

	status = 1;
	file_f = file_to = sys_read = 0;

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[2] == NULL)
		dprintf(SE, "Erro\r: Can't write to file %s\n", argv[2]), exit(99);
	if (argv[1] == NULL)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_f = open(argv[1], O_RDONLY);
	if (file_f == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	sys_read = read(file_f, buf, 1024);
	if (sys_read == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);

	while (sys_read != 0)
	{
		status = write(file_to, buf, sys_read);
		if (status == -1 || status != sys_read)
			dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
		sys_read = read(file_f, buf, 1024);
		if (sys_read == -1)
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	status = close(file_f);
	if (status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", file_f), exit(100);
	status = close(file_to);
	if (status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
