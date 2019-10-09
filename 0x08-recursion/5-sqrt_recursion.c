#include "holberton.h"

/**
 * _find_root - returns the natural square root of a number
 *
 * @subradical: subradical amount of square
 * @index: index of root
 * Return: -1 if subradical does not have,
 * index if it exist, otherwise returns value
 */
int _find_root(int subradical, int index)
{
	if (subradical == 1)
		return (1);
	else if (index * index == subradical)
		return (index);
	else if (index * index < subradical)
		return (_find_root(subradical, index + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to square
 * Return: the natural square root of a number
 * If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	return (_find_root(n, 1));
}
