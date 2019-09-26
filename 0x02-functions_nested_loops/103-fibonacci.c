#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a = 1, b = 2, result = 0, c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			result = result + b;

		c = b;
		b = b + a;
		a = c;
	}
	printf("%d\n", result);
	return (0);
}
