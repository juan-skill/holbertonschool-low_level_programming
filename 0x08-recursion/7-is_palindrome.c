#include "holberton.h"

/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: a string to computes
 * Return: the lenght of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - check whether string is palindrome
 *
 * @s: string
 * Return: 1 if it is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end = (_strlen_recursion(s) - 1);

	if (s[start] == s[end])
		return (1);
	else
		return (is_palindrome(s + 1));
	return (0);
}
