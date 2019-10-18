#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * with a call malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new = NULL;


	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);
	if (ptr == NULL)
		return (ptr_new);

	if (new_size > old_size)
		_memcpy(ptr_new, ptr, old_size);
	else
		_memcpy(ptr_new, ptr, new_size);
	free(ptr);

	return (ptr_new);
}
