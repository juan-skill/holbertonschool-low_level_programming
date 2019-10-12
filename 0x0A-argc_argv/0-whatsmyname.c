#include <stdio.h>

/**
 * main - prints the name by which the
 * program was called
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 0 Always (success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", *(argv + 0));
	return (0);
}
