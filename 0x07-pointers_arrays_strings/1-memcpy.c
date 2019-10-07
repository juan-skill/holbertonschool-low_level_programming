#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: a pointer to char that contains the array source
 * @src: a pointer to char that contains the array destination
 * @c: a value char to fills
 * Return: a pointer that contains the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest;

	pdest = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (pdest);
}
