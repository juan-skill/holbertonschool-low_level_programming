#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: a pointer to char that points to array 1
 * @src: a pointer to char that points to array 2
 * @n: it will use most n bytes from src
 * Return: a pointer to char to copies
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
