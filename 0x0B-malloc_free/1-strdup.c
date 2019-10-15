#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
 * _strdup - duplicates a string to a newly allocated space *
 *
 * @str: string to duplicate
 * Return: returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *s_dup;

	if (str == NULL)
		return (NULL);

	s_dup = malloc(1 + _strlen(str));
	if (s_dup == NULL)
		return (NULL);

	s_dup = _strcpy(s_dup, str);

	return (s_dup);
}
