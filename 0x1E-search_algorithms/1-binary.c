#include "search_algos.h"
#include <stdio.h>

/**
 * print_iteration - prints every row of iteration
 *
 * @array: array to print
 * @beg: the first element of array
 * @end: the last element in array
 * Return: void
 */
void print_iteration(int *array, size_t beg, size_t end)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = beg; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}

	printf("\n");

}


/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: array to search in
 * @size: size of array
 * @value: value being searched for
 * Return: returns the first index of the value, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t beg, end, mid;
	int flag;

	beg = end = mid = flag = 0;

	/* if (!array) */
	if (array == NULL || size == 0)
		return (-1);

	end = size - 1;
	while (beg <= end)
	{
		print_iteration(array, beg, end);

		mid = (beg + end) / 2;

		if (array[mid] > value)
			end = mid - 1;

		else if (array[mid] < value)
			beg = mid + 1;
		else
			return (mid); /* if (array[mid] == value) */
	}

	return (-1);
}
