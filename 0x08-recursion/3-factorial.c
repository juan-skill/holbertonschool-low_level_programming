#include "holberton.h"

/**
 * factorial - return the number of a given number
 *
 * @n: number to get factorial
 * Return: factorial of n, as int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
