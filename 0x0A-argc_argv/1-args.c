#include <stdio.h>

/**
 * main - the number of arguments passed into it.
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 0 Always (success)
 */
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
