#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @header: a pointerr to the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (head->str != NULL)
			printf("[%u] %s\n", head->len, head->str);
		else
			printf("[0] (nil)\n");

		head = head->next;
		i++;
	}

	return (i);
}
