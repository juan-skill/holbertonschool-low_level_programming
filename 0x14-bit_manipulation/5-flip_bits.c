#include "holberton.h"

/**
 * flip_bits -the number of bits you would need to flip to get from
 * one number to another.
 *
 * @n: number one to print
 * @m: number two to converter to
 * Return: the number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int count;

	count = or = 0;

	or = n ^ m;
	while (or > 0)
	{
		/*if ((or & 1))*/
		if ((or & 1) != 0)
			count++;

		or = or >> 1;
	}

	return (count);
}
