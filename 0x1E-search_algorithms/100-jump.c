#include "search_algos.h"

/**
 * jump_search - Search for the value in an array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int beg = 0, end = 0, step = 0, i = 0;

        if (array ==  NULL || size == 0)
                return (-1);

        beg = 0;
        end = 0;
        step = sqrt(size);

        for (i = 0; i <= size - 1; i = i + step)
        {
                if (array[i] < value)
                {
                        beg = i;
                        end = beg + step;
                        printf("Value checked array[%d] = [%d]\n", i, array[i]);
                }
        }

        printf("Value found between indexes [%d] and [%d]\n", beg, end);


        for (i = beg; i <= end && i <= size - 1; i++)
        {
                printf("Value checked array[%d] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                        return (i);
                }
        }

	

	return (-1);
}
