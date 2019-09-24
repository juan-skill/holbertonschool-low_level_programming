#include "holberton.h"
#include <stdio.h>

/**
 * _abs - returns the absolute value of number
 *
 * @n: int to get absolute value
 * Return: absolute value
 */
int _abs(int n)
{
	int mask;

	mask = n >> (sizeof(int) * 8 - 1);

	return ((n + mask) ^ mask);

}


/**
 * _add_special_char - adds space, colon to output
 *
 * @n: number to display
 * Return: void
 */
void _add_special_char(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar('\n');
	}
	if (n == -98)
	{
		_putchar(98 / 10 + '0');
		_putchar(98 % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	if (n <= 0)
		n = _abs(n);
	if (n < 10)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n >= 10 && n != 98 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}


	return;

}


/**
 * print_to_98 - prints numbers from n to 98
 *
 * @n: starting number
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			_add_special_char(n--);
	}
	if (n < 98)
	{
		while (n < 98)
			_add_special_char(n++);
	}
	if (n == 98)
		_add_special_char(98);
}
