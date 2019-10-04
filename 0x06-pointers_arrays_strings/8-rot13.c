#include "holberton.h"

/**
 * rot13 - converts upper/lowercase  to rot13
 * *
 * @s: string to convert to rot13
 * Return: returns converted string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
				s[i] -= 13;
			else
				s[i] += 13;
			i++;
		}
	}
	return (s);
}
