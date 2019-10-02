#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts a character array to an integer
 *  Respects leading '-' and '+' signs,
 * integer inside string may be preceded by any number of non-integer values
 * but will only copy the first whole integer found.
 *
 * @s: character array to convert
 * Return: returns integer from array, returns 0 if none found
 */
int _atoi(char *s)
{
	int i, num, negative;

	num = 0;
	negative = -1;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			negative *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (num < 0)
				num = (num * 10) - (s[i] - '0');
			else
				num = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}
	if (negative < 0)
		num *= -1;

	return (num);
}
