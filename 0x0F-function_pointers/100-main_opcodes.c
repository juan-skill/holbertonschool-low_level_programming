#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of the main function
 *
 * @ac: number of elements argv
 * @av: array argument command line
 * Return: always 0 (Success)
 */
int main(int ac, char *av[])
{
	int bytes, count;
	char *pf_main;

	bytes = 0;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/*we get the address of main function*/
	pf_main = (char *)&main;

	count = 0;
	bytes--;
	while (count < bytes)
		printf("%02hhx ", pf_main[count++]);

	/*printf("\n");*/
	printf("%02hhx\n", pf_main[count]);

	return (0);
}
