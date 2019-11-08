#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: input unsigned long
 * @index: index to return the value
 * Return: the value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	/*while (index)*/
	while (index-- > 0)
		n = n >> 1;

	/*index--;*/
	if (!(n & 1))
		return (0);
	return (1);
}
