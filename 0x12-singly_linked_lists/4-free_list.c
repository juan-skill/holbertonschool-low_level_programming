#include "lists.h"

/**
 * free_list - free the list.
 *
 * @head: a pointer to the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;
	list_t *next = NULL;

	if (head == 0)
		return;

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
