#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _memset - fills memory with a constant byte
 *
 * @s: a pointer to char to fill
 * @b: a value char to assign it to the buffer
 * @n: size of the buffer
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n-- > 0)
		s[i++] = b;

	return (s);
}

/**
 * create_array - create an array of chars, and
 * initilizes it with a specifier char
 *
 * @size: size of array
 * @c: character to initialize array with
 * Return: a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size <= 0)
		return (NULL);

	str = malloc(sizeof(char) * (int)size);
	if (str == NULL)
		return (NULL);

	str = _memset(str, c, size);

	return (str);
}
