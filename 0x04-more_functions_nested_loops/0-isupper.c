#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: c is the character for applying
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);

}
