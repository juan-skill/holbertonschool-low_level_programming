#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string type char
 * Return: returns the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;

	return (len);
}


/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to use
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if ((int)n >= _strlen(s2))
		n = _strlen(s2);

	ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		ptr[j++] = s1[i++];

	i = 0;
	while (i != n)
		ptr[j++] = s2[i++];

	ptr[j] = '\0';

	return (ptr);
}
