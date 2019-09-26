#include "holberton.h"

/**
 * more_numbers - prints ten times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int times, num;

	times = 0;
	while (times < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num >= 10)
				_putchar('0' + num / 10);
			_putchar('0' + num % 10);
			num++;
		}
		_putchar('\n');
		times++;
	}
}
