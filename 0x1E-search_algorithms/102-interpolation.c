#include "search_algos.h"


/**
 * interpolation_search - searches for a value in a sorted
 * of integers using the interpolation search algorightm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int beg, end, mid;

	beg = end = mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	end = size - 1;
	while (array[beg] != array[end]
	      && value >= array[beg]
	      && value <= array[end])
	{
		mid = beg + (((double)(end - beg) / (array[end] - array[beg]))
			 * (value - array[beg]));

		printf("Value checked array[%d] = [%d]\n",
		       (int) mid, array[mid]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			beg = mid + 1;
	}

	if (array[beg] == value)
		return (beg);

	mid = beg + (((double)(end - beg) / (array[end] - array[beg]))
		     * (value - array[beg]));

	printf("Value checked array[%d] is out of range\n", (int) mid);

	return (-1);
}
