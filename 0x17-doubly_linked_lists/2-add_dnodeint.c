#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 *
 * @head: a pointer to the first element into list
 * @n: The value of the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = NULL;

	/* if (head) */
	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	/* if (*head)*/
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}
