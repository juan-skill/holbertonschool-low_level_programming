#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet, ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, c;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}

	return;

}
