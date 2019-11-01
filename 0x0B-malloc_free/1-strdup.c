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
	char *s;

	s = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';

	return (s);
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

	s_dup = NULL;

	if (str == NULL)
		return (NULL);

	s_dup = malloc(1 + _strlen(str));
	/* if (!s_dup) */
	if (s_dup == NULL)
		return (NULL);

	s_dup = _strcpy(s_dup, str);

	return (s_dup);
}
