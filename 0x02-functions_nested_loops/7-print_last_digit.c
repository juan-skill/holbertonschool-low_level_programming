#include "holberton.h"

/**
 * _absolute - returns the absolute value of number
 *
 * @n: int to get absolute value
 * Return: absolute value any number
 */
int _absolute(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

/**
 * print_last_digit - prints the las digit fo number
 *
 * @n: int to get last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	last = _absolute(last);
	_putchar(last + '0');

	return (last);
}
