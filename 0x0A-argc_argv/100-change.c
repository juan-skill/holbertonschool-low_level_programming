#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 0 if success, otherwise 1 error
 */
int main(int argc, char *argv[])
{
	int cent = 0, coin = 0;

	if (argc == 2)
	{
		cent = atoi(argv[1]);

		for (; cent >= 25; coin++)
			cent -= 25;

		for (; cent >= 10; coin++)
			cent -= 10;

		for (; cent >= 5; coin++)
			cent -= 5;

		for (; cent >= 2; coin++)
			cent -= 2;

		for (; cent >= 1; coin++)
			cent -= 1;

		printf("%d\n", coin);
		return (0);
	}
	printf("Error\n");
	return (1);
}
