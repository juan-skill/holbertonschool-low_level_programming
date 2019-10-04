#include "holberton.h"

/**
 * rot13 - converts upper/lowercase  to rot13
 * *
 * @s: string to convert to rot13
 * Return: returns converted string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char M1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char M2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == M1[j])
			{
				s[i] = M2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
