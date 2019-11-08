#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: number to print in binary
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long int shift = 1;

	/*if (!n)*/
	if (n == 0)
		return (-1);

	if (!(index > (sizeof(long int) * 8)))
	{
		shift = shift << index;
		*n = *n | shift;
		return (1);
	}

	return (-1);
}
