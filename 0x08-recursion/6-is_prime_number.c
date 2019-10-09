#include "holberton.h"

/**
 * check_numbers - traverse the numbers to checks them
 *
 * @n: number to check for primality
 * @i: counter for prime check value
 * Return: when finished returns 1 for prime, or 0 for not
 */
int check_numbers(int n, int i)
{
	if (n % i != 0)
		return (1);
	return (check_numbers(n, ++i));
}

/**
 * is_prime_number - determine whether a given number
 * is a prime
 *
 * @n: number to check
 * Return: returns 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n == 1)
		return (0);
	return (check_numbers(n, 3));
}
