#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: array to search in
 * @size: size of array
 * @value: value being searched for
 * Return: returns the first index of the value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	/* if (!array) */
	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
