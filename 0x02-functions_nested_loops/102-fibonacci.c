#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	int i, n = 52;
	long x = 0, y = 1;

	printf("1");
	for (i = 2; i < n; i++)
	{
		y = y + x;
		x = y - x;

		if (!(y == 1))
			printf(", %ld", y);

	}

	return (0);
}
