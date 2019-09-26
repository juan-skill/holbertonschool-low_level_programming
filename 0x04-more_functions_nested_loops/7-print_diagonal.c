#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j, w = 0;

	if (w <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j != w)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		w++;
	}
}
