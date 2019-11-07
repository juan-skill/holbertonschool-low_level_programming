#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 *
 * @b: is pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	int uint, base, len, i;
	const char *s = NULL;

	uint = base = len = 0;

	/*if (!b)*/
	if (b == 0)
		return (0);

	s = b;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	len = b - s;

	for (i = len - 1; i >= 0; i--)
	{
		/*x << 2^y */
		uint += (s[i] - '0') * (1 << base);
		base++;

	}

	return (uint);
}
