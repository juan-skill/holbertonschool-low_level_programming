#include "lists.h"

/**
 * sum_dlistint - sums of all dlistint nodes
 *
 * @head: a pointer to the first element of list
 * Return: number of nodes in list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int count = 0;

	/* if (!head) */
	if (head == NULL)
		return (0);

	/*Do not change the head reference*/
	tmp = head; /* while (tmp)*/
	while (tmp != NULL)
	{
		count += tmp->n;
		tmp = tmp->next;
	}

	return (count);
}
