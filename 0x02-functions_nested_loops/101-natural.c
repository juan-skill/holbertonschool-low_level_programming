#include <stdio.h>

/**
 * main - omputes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n, count;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
			count = count + n;
		else if (n % 5 == 0)
			count = count + n;
	}
	printf("%d", count);

	return (0);

}
