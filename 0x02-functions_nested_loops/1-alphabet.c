#include "holberton.h"

/**
 * print_alphabet - prints the alphabet 'a' - 'z'
 *
 * Return: 0 Always (Success)
 */
void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
