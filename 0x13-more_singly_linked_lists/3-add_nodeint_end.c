#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/*if (!*head)*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
