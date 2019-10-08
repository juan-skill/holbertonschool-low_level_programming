#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of
 * the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum, sum1;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		sum += a[i];
	}
	printf("%d, ", sum);

	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		sum1 += a[j];
	}
	printf("%d\n", sum1);

}
