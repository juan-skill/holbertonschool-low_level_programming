#include "holberton.h"
#include <stdio.h>

/**
 * _absolute - returns the absolute value of number
 *
 * @n: int to get absolute value
 * Return: absolute value
 */
int _absolute(int n)
{
	if (n <= 0)
		return (n * (-1));
	else
		return (n);

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
		putchar('-');
	}
	if (n == 98)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		putchar('\n');
	}
	if (n == -98)
	{
		putchar(98 / 10 + '0');
		putchar(98 % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	if (n <= 0)
		n = _absolute(n);
	if (n < 10)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	else if (n >= 10 && n != 98 && n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	else if (n >= 100)
	{
		putchar(n / 100 + '0');
		putchar(n / 10 % 10 + '0');
		putchar(n % 10 + '0');
		putchar(',');
		putchar(' ');
	}
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
