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
	int num, i, negative;

	num = 0;
	neg = -1;
	for (i = 0; s[i] < '0' || s[i] > '9') && s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			neg *= -1;
	}
  
	while (s[i] < '0' || s[i] > '9') && s[i] != '\0')
		num = (num * 10) - (s[i++] - '0');
	return (num * neg);
}
