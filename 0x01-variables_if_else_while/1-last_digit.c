#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print the last digit of the number
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n;
	n %= 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", m, n);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", m, n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less 6 and not 0\n", m, n);

	return (0);
}
