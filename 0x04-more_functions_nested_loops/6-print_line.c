#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times the character
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
