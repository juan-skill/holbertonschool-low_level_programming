#include "holberton.h"

/**
 * add_char_especial - add spaces, colon to format output
 *
 * @num: number to add after char special
 * Return: void
 */
void add_char_especial(int num)
{
	int n1, n2;

	if (num < 10)
	{
		_putchar(44);
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num >= 10 && num < 100)
	{
		n1 = num / 10;
		n2 = num % 10;
		_putchar(44);
		_putchar(' ');
		_putchar(n1 + '0');
		_putchar(n2 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(num / 100 + '0');
		_putchar(num / 10 % 10 + '0');
		_putchar(num % 10 + '0');
	}

	return;

}

/**
 * print_times_table - prints from 0 to 15 times tables
 *
 * @n: it is the time number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				add_char_especial(i * j);
			}
			_putchar('\n');
		}
	}


	return;

}
