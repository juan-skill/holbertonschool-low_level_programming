#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base number
 * @y: exponent to raised number
 * Return: if y is lower than 0, it should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
