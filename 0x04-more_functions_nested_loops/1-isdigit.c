#include "holberton.h"

/**
 * _isdigit - checks for a digit(0 through 9)
 *
 * @c: is the character for applying
 * Return: 1 if is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c > 58)
		return (1);

	return (0);
}
