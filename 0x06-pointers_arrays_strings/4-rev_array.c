#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: a pointer to int that contains the address of an array
 * @n: the lenght of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, st, en;

	i = 0;
	n -= 1;

	while (i < n)
	{
		st = a[i];
		en = a[n];
		a[i++] = en;
		a[n--] = st;
	}
}
