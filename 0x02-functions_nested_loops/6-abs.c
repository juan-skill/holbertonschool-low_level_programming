#include "holberton.h"

/**
 * _abs - returns the absolute value of number
 *
 * @n: int to get absolute value
 * Return: absolute value
 */
int _abs(int n)
{
	int mask;

	mask = n >> (sizeof(int) * 8 - 1);

	return ((n + mask) ^ mask);

}
