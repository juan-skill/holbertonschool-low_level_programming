#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: a pointer to the first array
 * @src: a pointer to the second array
 * Return: a pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (dest[j] != '\0')
		dest[i++] = src[j++];
	dest[j] = '\0';

	return (dest);
}
