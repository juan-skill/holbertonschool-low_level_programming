#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, rows;

	rows = size;
	if (rows <= 0)
		_putchar('\n');
	i = 1;
	while (i <= rows)
	{
		for (j = i; j < rows; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
