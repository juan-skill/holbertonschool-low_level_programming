#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: a pointer to char that contains the array source
 * @src: a pointer to char that contains the array destination
 * @n:  lenght to concant
 * Return: a pointer that contains the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = NULL;

	pdest = dest;
	for (; n > 0; dest++, src++, n--)
		*dest = *src;

	return (pdest);
}
