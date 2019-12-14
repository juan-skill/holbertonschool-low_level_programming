#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a list
 *
 * @head: a pointer to the first element of list
 * @index: the index of the node
 * Return: node at index or null if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	/* if (!head)  */
	if (head == NULL)
		return (NULL);

	/*Do not change the head reference*/
	tmp = head; /* while (tmp && n < index) */
	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	/* if (!tmp) */
	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
