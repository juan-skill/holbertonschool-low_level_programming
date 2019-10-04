#include "holberton.h"
#include <stdio.h>

/**
 * there_isc - fsdskljdkf
 *
 * @c: char to checks
 * Return: 1 if there is a character special, 0 otherwise
 */
int there_isc(char c)
{
	if ((c == ',' || c == ';' || c == '.'||
	      c == '!' || c == '?' || c == '"' ||
	      c == '(' || c == ')' || c == '{' || c == '}' ||
	      c == ' ' || c == '\t' || c == '\n'))
		return (1);
	else
		return (0);
}


/**
 * cap_string - capitalizes all words of a string
 *
 * @str: a string to checks all words
 * Return: a pointer to int that points to string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (there_isc(str[i] == 1 && (str[i + 1] >= 'a' && str[i + 1] <= 'z')))
		{
			str[i + 1] -= 32;
		}

		i++;
	}
	return (str);
}
