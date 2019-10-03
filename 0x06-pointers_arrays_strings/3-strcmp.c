#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: a pointer to char that contains the first string
 * @s2: a pointer to char that contains the second string
 * Return: if s1 < s2 is negative, 0 if s2 is not found
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		if (*s2 == '\0')
			return (0);
	return (*s1 - *s2);
}
