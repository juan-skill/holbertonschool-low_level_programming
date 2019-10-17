#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *  _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of an array
 * @size: size of the elements
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, s;
	char *ptr;

	if (nmemb <= 0 && size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	s = nmemb * size;
	for (i = 0; i < s; i++)
		ptr[i] = 0;

	return (ptr);
}
