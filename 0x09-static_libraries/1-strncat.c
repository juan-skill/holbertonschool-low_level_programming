#include "holberton.h"

/**
 * _strncat - that concatenates two strings
 *
 * @dest: a pointer to the first array
 * @src: a pointer to the second array
 * @n: it will use at most n bytes from src
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; dest[j] != '\0' && j != n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
