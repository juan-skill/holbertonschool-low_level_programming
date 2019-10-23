#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: is an array
 * @size:  is the number of elements in the array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: returns the index of the first element, otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 || cmp != NULL || array != NULL)
	{
		i = 0;
		while (i < size)
		{
			if ((*cmp)(array[i]))
			return (i);
			i++;
		}
	}
	return (-1);
}
