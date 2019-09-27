#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	long num = 612852475143;

	i = (int) sqtr(num);
	while (i > 2)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			break;
		}
		i++;
	}

	return (0);
}
