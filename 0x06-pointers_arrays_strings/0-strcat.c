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

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
