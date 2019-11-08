#include "holberton.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 *
 * @n: number to print in binary
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int shift = 1;

	if (!(index > (sizeof(long int) * 8)))
	{
		shift = ~(1 << index);
		*n = *n & shift;
		return (1);
	}

	return (-1);
}
