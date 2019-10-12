#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 1 if no arguments, otherwise 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
