#include "holberton.h"
/**
 * wildcmp - compare two strings with possible wildcards
 * @s1: string one to compare
 * @s2: string two to compare, may or may not contain wildcards
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}
