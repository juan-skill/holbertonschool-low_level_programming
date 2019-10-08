#include "holberton.h"

/**
 * _strstr - locates a substring blah blabh
 *
 * finds the first occurrence of the substring needle in the string haystack.
 * @haystack: strings to checks
 * @needle: substrings to checks
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, st;

	i = 0;
	while (haystack[i] != '\0')
	{
		st = i;
		j = 0;
		while (needle[j] == haystack[i] &&
		       haystack[i] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + st);
		i = st + 1;
	}
	return (0);
}
