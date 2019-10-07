#include "holberton.h"

/**
 * _memset - that fills memory with a constant byte
 *
 * @s: a pointer to char to fill
 * @b: a value char to assign it to the buffer
 * @n: size of the buffer
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (i < n)
	{
		s[n--] = b;
		i++;
	}
	return (s);
}
