#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @head: a pointerr to the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *head)
{
	/*counter variable*/
	size_t i = 0;
	const list_t *tmp;

	/*Do not change the head reference.*/
	tmp = head;

	/* if (!tmp) */
	if (tmp == NULL)
		return (0);

	/* while (tmp) */
	while (tmp != NULL)
	{
		if (tmp->str != NULL)
			printf("[%u] %s\n", tmp->len, tmp->str);
		else
			printf("[0] (nil)\n");

		tmp = tmp->next;
		i++;
	}
	return (i);
}
