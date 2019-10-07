#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @str: string type char
 * Return: returns the lenght of a string
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

/**
 * _ads_two_digits - returns the adds of two numbers
 *
 * @n1: number one
 * @n2: number two
 * @n3: number three
 * Return: returns the sum of three
 */
int _ads_two_digits(int n1, int n2, int n3)
{
	return (n1 + n2 + n3);
}

/**
 * infinite_add - function that adds two numbers
 *
 * @n1: int type date
 * @n2: int type date
 * @r: is the buffer that the function will use store the result
 * @size_r: is the buffer size
 * Return: pointer to char that contains to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, temp, remainder, one, two;

	i = j = temp = remainder = 0;
	r[size_r - 1] = '\0';
	size_r = size_r - 2;
	i = _strlen(n1) - 1;
	j = _strlen(n2) - 1;

	for (; size_r >= 0 && (i >= 0 || j >= 0); i--, j--)
	{
		if (i < 0)
			one = '0' - '0';
		else
			one = n1[i] - '0';
		if (j < 0)
			two = '0' - '0';
		else
			two = n2[j] - '0';

		temp = _ads_two_digits(one, two, remainder);
		if (temp < 9 ||  _ads_two_digits(one, two, 0) < 9)
			remainder = 0;
		if (temp > 9)
			remainder = temp / 10;
		temp %= 10;
		r[size_r--] = temp + '0';
	}
	if (remainder >= 1)
		r[size_r] = remainder + '0';
	else
		r[size_r] = 1;

	if ((size_r < i || size_r < j) || (size_r < 0 && remainder >= 1))
		return (0);

	if (size_r + remainder >= 1)
		remainder = 0;
	else
		remainder = 1;
	return (r + size_r);
}
