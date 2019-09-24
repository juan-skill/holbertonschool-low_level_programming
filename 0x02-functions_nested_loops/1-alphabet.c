#include "holberton.h"

/**
 * main - prints the alphabet 'a' - 'z'
 *
 * Return: 0 Always (Success)
 */
void print_alphabet(void)
{
	int c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return;
}
