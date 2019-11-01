#include "lists.h"

/**
 * free_list - free the list.
 *
 * @head: a pointer to the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == 0)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
