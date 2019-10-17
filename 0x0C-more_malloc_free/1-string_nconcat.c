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
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if ((int)n > _strlen(s2))
		n = _strlen(s2);

	ptr = (char *)malloc(_strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (j != n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
