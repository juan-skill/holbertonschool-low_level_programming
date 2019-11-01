#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @header: a pointerr to the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *header)
{
	unsigned int i = 0;

	if (header != NULL)
		return (0);

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", header->len, header->str);
		else
			printf("[0] (nil)\n");

		header = header->next;
		i++;
	}

	return (i);
}
