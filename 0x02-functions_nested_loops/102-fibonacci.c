#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long i, num1, num2, num3;

	num1 = 1;
	num2 = 2;
	num3 = 3;

	printf("1, 2, ");
	for (i = 0; i < 47; i++)
	{
		printf("%ld, ", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
	}
	printf("%ld\n", num3);

	return (0);
}
