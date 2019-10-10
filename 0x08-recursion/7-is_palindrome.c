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
 * palindrome_check - helper function for is_palindrome
 *
 * @end: length of string
 * @start: counter for palindrome
 * @s: string to check
 * Return: returns itself if incomplete, or 1 for palindrome, 0 for not
 */
int palindrome_check(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (s[start] != s[end])
		return (0);
	if (start < end + 1)
		return (palindrome_check(s, start + 1, end - 1));
	return (1);
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

	return (palindrome_check(s, start, end));
}
