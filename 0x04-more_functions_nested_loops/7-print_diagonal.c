#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j, w;

	w = 0;
	if (n <= 0)
		_putchar('\n');
	while (n > 0)
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
		n--;
	}
}
