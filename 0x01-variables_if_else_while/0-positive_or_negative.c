#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Show if a number >0, <0 or equal
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d the number is positive\n", n);
	else if (n < 0)
		printf("%d the number is negative\n", n);
	else
		printf("%d the number is equal to 0\n", n);
	return (0);
}
