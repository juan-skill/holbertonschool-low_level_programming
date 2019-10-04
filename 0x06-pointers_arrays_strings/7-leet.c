#include "holberton.h"

/**
 * leet - Short description, single line
 * @s: a pointer that poinst to char
 * Return: 0
 */
char *leet(char *s)
{
	int i = 0, len = 0;

	char l_apper[10] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char l_lower[10] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	while (s[i] != '\0')
	{
		while (s[i] == l_upper[l])
		{
			s[i] = l_lower[l];
			i++;
			l = 0;
		}
		len++;
		if (len >= 10)
		{
			i++;
			len = 0;
		}
	}
	return (s);
}
