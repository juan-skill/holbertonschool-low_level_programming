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
	dlistint_t *n_node = NULL, *tmp = NULL, *tmp2 = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n, n_node->next = NULL, n_node->prev = NULL;
	tmp = (*h);
	if (idx == 0)
	{
		n_node->prev = NULL;
		n_node->next = tmp;
		if (*h != NULL)
			tmp->prev = n_node;
		*h = n_node;
		return (n_node);
	}
	while (count++ < (idx - 1))
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(n_node);
			return (NULL);
		}
	}
	if (tmp->next == NULL)
	{
		free(n_node);
		return (add_dnodeint_end(h, n));
	}
	n_node->next = tmp->next;
	n_node->prev = tmp;
	tmp2 = tmp->next;
	tmp->next = n_node;
	tmp2->prev = n_node;

	return (n_node);
}
