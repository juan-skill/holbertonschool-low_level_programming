#include "holberton.h"

/**
 * print_most_number - prints the numbers from 0 to 9
 * but it does not print 4 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	while (num < 10)
	{
		if (num != 2 || num != 4)
			_putchar('0' + num);
		num++;
	}
	_putchar('\n');

}
