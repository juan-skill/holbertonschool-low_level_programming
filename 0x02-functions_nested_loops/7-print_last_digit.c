#include "holberton.h"

/**
 * _abs - returns the absolute value of number
 *
 * @n: int to get absolute value
 * Return: absolute value *
 */
int _abs(int n)
{
	int mask;

	mask = n >> (sizeof(int) * 8 - 1);

	return ((n + mask) ^ mask);

}

/**
 * print_last_digit - prints the las digit fo number
 *
 * @n: int to get last digit
 * Return: last digit *
 */
int print_last_digit(int n)
{
	int last;

	last = _abs(n);
	last = last % 10;
	_putchar(last + '0');

	return (last);

}