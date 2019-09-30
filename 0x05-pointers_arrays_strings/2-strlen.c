#include "holberton"

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
	while (*s != '\0')
	{
		*s++;
		len++;
	}

	return (len);
}
