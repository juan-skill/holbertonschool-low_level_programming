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
 * _strcat - concatenates two strings
 *
 * @dest: a pointer to the first array
 * @src: a pointer to the second array
 * Return: a pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = _strlen(dest);
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';

	return (dest);
}


/**
 * argstostr - concats together program arguments into one string
 *
 *
 * @ac: argument count
 * @av: arguments
 * Return: returns pointer to completed string
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int length, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*length = 1;*/
	for (i = 0; i < ac; i++)
		length += _strlen(av[i]) + 1;


	str = malloc(length * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}

	if (!str)
		return (NULL);

	return (str);
}
