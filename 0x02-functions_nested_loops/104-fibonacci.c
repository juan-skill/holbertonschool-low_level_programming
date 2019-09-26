#include <stdio.h>
#define LEN 1000000000000000000

/**
 * main - finds and prints the first 98 fib numbers
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, temp = 0, temp2 = 0;
	unsigned long int result_1, result_2, result_3;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i < 98; i++)
	{
		if (a + b > LEN || temp > 0 || temp2 > 0)
		{
			result_1 = (a + b) / LEN;
			result_2 = (a + b) % LEN;
			result_3 = temp + temp2 + result_1;

			temp = temp2;
			temp2 = result_3;
			a = b;
			b = result_2;

			printf("%lu%010lu", temp2, b);
		}
		else
		{
			result_2 = a + b;
			a = b;
			b = result_2;
			printf("%lu", b);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
