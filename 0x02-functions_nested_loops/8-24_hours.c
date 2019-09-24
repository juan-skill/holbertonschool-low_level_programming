#include "holberton.h"

/**
 * jack_bauer - prints every minute f the day of Jack Bauer from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m, n1, n2, n3, n4;

	for (h = 0; h < 24; h++)
	{
		m = 0;
		while (m < 60)
		{
			n1 = h / 10;
			n2 = h % 10;
			n3 = m / 10;
			n4 = m % 10;
			_putchar(n1 + '0');
			_putchar(n2 + '0');
			_putchar(58);
			_putchar(n3 + '0');
			_putchar(n4 + '0');
			_putchar('\n');
			m++;
		}
	}

	return;

}
