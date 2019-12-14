#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: a pointer to the first element of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	/* if(!head) */
	if (head == NULL)
		return;

	/* Do not change the head reference */
	tmp = head; /* while (tmp) */
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
