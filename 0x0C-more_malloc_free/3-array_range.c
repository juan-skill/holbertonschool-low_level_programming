#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int *array_range(int min, int max)
 *
 * @min:
 * @max:
 * Return:
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(((max-min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
