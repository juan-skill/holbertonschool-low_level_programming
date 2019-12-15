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

/**
 * delete_dnodeint_at_index- deletes a node in nth position
 *
 * @head: a pointer to the first element into list
 * @index: index where the node is added
 * Return: the number of nodes in the list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;
	size_t length = 0;

	if (head == NULL || (*head == NULL && index != 0))
		return (-1);

	length = dlistint_len(*head);
	if (index > (length - 1) || (int)index < 0 || length == 0)
		return (-1);

	tmp = *head;
	count = 0;
	while (count++ < index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}

	if (index == 0)
	{
		tmp = *head;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
		if (tmp->prev != NULL)
			tmp->prev->next = tmp->next;
		free(tmp);
	}
	return (1);
}
