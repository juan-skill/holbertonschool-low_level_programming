#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: an array
 * @size: the size of an array
 * @action: function to function to executes
 * Return: result of operation
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL || size <= 0)
		return;

	i = 0;
	while (i < size)
		(*action)(array[i++]);
}
