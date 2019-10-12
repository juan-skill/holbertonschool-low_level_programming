#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 0 Always (success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
