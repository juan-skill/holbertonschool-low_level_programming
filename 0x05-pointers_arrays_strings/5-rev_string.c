#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string to check the length
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * rev_string - reverses string in place,
 * without printing it
 *
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	j = _strlen(s) - 1;
	i = 0;
	while (i < j)
	{
		temp = s[j];
		s[j--] = s[i];
		s[i++] = temp;
	}
}
