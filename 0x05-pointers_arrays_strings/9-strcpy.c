#include "holberton.h"

/**
 * _strcpy - opies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *copy_p;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	copy_p = dest;

	return (copy_p);
}
