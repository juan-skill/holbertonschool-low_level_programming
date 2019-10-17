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
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 *  _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of an array
 * @size: size of the elements
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 && size <= 0)
		return (NULL);

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	ptr = _memset(ptr, 0, nmemb * size);

	return (ptr);
}
