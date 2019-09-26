#include "holberton.h"

/**
 * print_square - prints a square
 *
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	for (row = size; row > 0; row--)
	{
		for (col = size; col > 0; col--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
