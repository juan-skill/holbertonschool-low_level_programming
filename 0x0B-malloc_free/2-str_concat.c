#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies the string pointed to by src,
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
 * str_concat - concatenates two strings to a new string
 *
 *
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to completed string
 */
char *str_concat(char *s1, char *s2)
{
	char *copy_str;
	int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (1 + _strlen(s1) + _strlen(s2));
	copy_str = malloc(size);

	if (copy_str == NULL)
		return (NULL);

	copy_str = _strcpy(copy_str, s1);

	for (i = _strlen(s1), j = 0; s2[j] != '\0' && i != size; i++, j++)
		copy_str[i] = s2[j];
	copy_str[i] = '\0';

	return (copy_str);
}
