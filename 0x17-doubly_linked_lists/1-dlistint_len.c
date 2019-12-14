#include "lists.h"

/**
 * dlistint_len - counts the length of the list
 *
 * @head: a pointer to the first element into list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t c_nodes = 0;
	const dlistint_t *tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return (c_nodes);

	/*Do not change the head reference*/
	tmp = head; /* while (tmp)  */
	while (tmp != NULL)
	{
		tmp = tmp->next;
		c_nodes++;
	}
	return (c_nodes);
}
