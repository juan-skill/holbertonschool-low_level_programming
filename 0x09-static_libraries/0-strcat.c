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
	int i, j, c;

	i = j = c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (c < j)
		dest[i++] = src[c++];
	return (dest);
}
