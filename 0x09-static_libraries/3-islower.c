#include "holberton.h"

/**
 * _islower - checks if a character is letter
 * @c: character to check for lowercase
 * Return: 1 if c is lowercase - 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c < 'z')
		return (1);
	else
		return (0);
}
