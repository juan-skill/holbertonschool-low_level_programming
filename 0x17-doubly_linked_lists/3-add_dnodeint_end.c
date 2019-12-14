#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the beginning of a list
 *
 * @head: a pointer to the first element into list
 * @n: The value of the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *n_node;

	tmp = n_node = NULL;

	/* if (head) */
	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;

	/*if(!head)*/
	if (*head == NULL)
		*head = n_node;
	else
	{
		/*Do not change the head reference*/
		tmp = (*head); /* while (tmp)  */
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = n_node;
		n_node->prev = tmp;
	}

	return (n_node);
}
