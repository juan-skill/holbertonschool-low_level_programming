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
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: The head of the list
 * @idx: The index, starting at 0
 * @n: The value of the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node = NULL, *tmp = NULL;
	unsigned int count = 0, length = 0;

	if (h == NULL || (*h == NULL && idx != 0) || ((int)idx < 0))
		return (NULL);

	length = dlistint_len(*h);
	if (length == 0 || idx > length)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n, n_node->prev = NULL, n_node->next = NULL;

	count = 0;
	tmp = *h;
	while (tmp != NULL && count < (idx - 1))
	{
		tmp = tmp->next;
		count++;
	}

	n_node->next = tmp->next;
	n_node->prev = tmp;
	tmp->next = n_node;
	tmp->next->prev = n_node;

	return (n_node);
}
