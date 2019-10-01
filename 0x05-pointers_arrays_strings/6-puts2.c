#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to check the length
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: char to print
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
