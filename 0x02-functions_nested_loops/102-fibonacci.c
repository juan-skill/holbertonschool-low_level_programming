#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	int i, n = 50;
	long x = 0, y = 1;

	printf("0 1 ");
	for (i = 2; i < n; i++)
	{
		y = y + x;
		x = y - x;
		printf("%lu ", y);
	}

	return (0);
}
