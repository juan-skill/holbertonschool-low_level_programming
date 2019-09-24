#include "holberton.h"

/**
 * print_sign - prints the sign of a number depending is zero, over, under
 *
 * @n: number for check
 * Return: 1 if >0, -1 else if <0, otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
