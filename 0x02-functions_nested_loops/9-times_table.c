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
	else if (num >= 10 && num < 82)
	{
		n1 = num / 10;
		n2 = num % 10;
		_putchar(44);
		_putchar(' ');
		_putchar(n1 + '0');
		_putchar(n2 + '0');
	}

	return;

}

/**
 * times_table - prints the 9 times tables, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			add_char_especial(i * j);
		}
		_putchar('\n');
	}

	return;

}
