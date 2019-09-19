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
	/* your code goes there */
	m = n;
	n = n % 10;

	printf("Last digit of %i is %i ", m, n);
	if (n > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is 0\n");
	else if (n < 6 && n != 0)
		printf("and is less 6 and not 0\n");

	return (0);
}
